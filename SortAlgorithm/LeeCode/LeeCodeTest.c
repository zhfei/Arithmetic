//
//  LeeCodeTest.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/3/9.
//  Copyright © 2019年 周飞. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void swip9(int left, int right) {
    int a = left;
    left = right;
    right = a;
}

//冒泡
void maopao(int array[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = count - 1; j > i ; j--) {
            if (array[j - 1] > array[j]) {
                swip9(array[j - 1], array[j]);
            }
        }
    }
}

//选择
void select9(int array[], int count) {
    for (int i = 0; i < count - 1; i++) {
        int flag = i;
        for (int j = count - 1; j > i ; j--) {
            if (array[j] < array[flag]) {
                flag = j;
            }
        }
        
        if (flag != i) {
            swip9(array[flag], array[i]);
        }
    }
}

//插入
void insert9(int array[], int count) {
    for (int i = 1; i < count; i++) {
        int last = array[i-1];
        int current = array[i];
        int target = 0;
        
        if (current < last) {
            for (int j = i-1; j >= 0; j--) {
                if (array[i] < array[j]) {
                    array[j+1] = array[j];
                } else {
                    target = j;
                    break;
                }
            }
            array[target] = current;
        }
    }
}

//希尔，数据量比较大时，用希尔
void xier(int array[], int count) {
    int tap = count;
    
    while (tap > 1) {
        tap = tap/3 + 1;
        
        for (int i = tap; i < count; i+=tap) {
            int last = array[i-tap];
            int current = array[i];
            int target = 0;
            
            if (current < last) {
                for (int j = i-tap; j >= 0; j-=tap) {
                    if (array[i] < array[j]) {
                        array[j+tap] = array[j];
                    } else {
                        target = j;
                        break;
                    }
                }
                array[target] = current;
            }
        }
    }
}

//快排，经典算法
void quickSort9(int array[], int start, int end) {
    if (start < end) {
        int flag = array[start];
        int sp = start;
        int ep = end;
        
        while (sp < ep) {
            while (array[sp] < flag && sp < end) {
                sp++;
            }
            while (flag > array[ep] && ep > start) {
                ep--;
            }
            
            if (sp < ep) {
                swip9(array[sp], array[ep]);
            }
        }

        quickSort9(array, start, sp);
        quickSort9(array, sp+1, end);
    }
}

//归并排序，
int * merge9(int leftArr[], int leftLength, int rightArr[], int rightLength) {
    int leftT = 0, rightT = 0, resultT = 0;
    int * resultArr = (int *)malloc(sizeof(int)*(leftLength+rightLength));
    
    
    while (leftT < leftLength || rightT < rightLength) {
        resultArr[resultT++] = leftArr[leftT] < rightArr[rightT] ? leftArr[leftT++]:rightArr[rightT++];
    }
    
    while (leftT < leftLength) {
        resultArr[resultT++] = leftArr[leftT++];
    }
    
    while (rightT < rightLength) {
        resultArr[resultT++] = rightArr[rightT++];
    }
    
    leftArr = resultArr;
    
    free(resultArr);
    return leftArr;
}

int * mergeSort9(int array[], int length) {
    if (length <= 1) {
        return array;
    }
    
    int mid = length/2;
    int *leftArr = array;
    int leftCount = mid;
    int *rightArr = leftArr+leftCount;
    int rightCount = length-mid;
    
    mergeSort9(leftArr, leftCount);
    mergeSort9(rightArr, rightCount);
    
    return merge9(leftArr, leftCount, rightArr, rightCount);
}

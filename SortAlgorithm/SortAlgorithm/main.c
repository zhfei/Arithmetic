//
//  main.c
//  ArithmeticDemo
//
//  Created by 周飞 on 18/3/22.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include <stdio.h>
#include "BubblingSort.h"
#include "SelectSort.h"
#include "InsertSort.h"
#include "shellSort.h"
#include "QuickSort.h"
#include "MargeSort.h"
#include "BinarySearch.h"

#include "SequenceList.h"
#include "LinkList.h"
#include "DoubleLinkList.h"
#include "Test3.h"
#include "Test6.h"

void baseType(char arrr[]) {
    
    char a;//一个字节
    char *b;//变量b保存一个Char型指针，一个地址总线的宽度（跟CPU位数有关）
    char **c;//变量c保存一个Char型指针的指针，一个地址总线的宽度（跟CPU位数有关）
    
    char arr[] = "abc";//arr对象占用的内存
    char *arrP = "abc";//指向常量字符串的指针arrP，的大小
    printf("a:%d--b:%d--c:%d--arr:%d--arrP:%d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(arr),sizeof(arrP));
    
    
    //传过来的数组是指针
    //自己定义的数组是对象
    printf("arrr:%d--&arr:%d\n",sizeof(arrr),sizeof(arr[0]));
    
    int num = 10;//四子节
    long longNum = 10;//8子节
    float ff = 10;//四子节
    double dd = 10;//8子节
    printf("num:%d--&num:%d--longNum:%d--ff:%d--dd:%d\n",sizeof(num),sizeof(&num),sizeof(longNum),sizeof(ff),sizeof(dd));
    
}

int* twoSum(int* nums, int numsSize, int target) {
    for (int i = 0; i< numsSize; i++) {
        int tmp = nums[i];
        if (target > tmp) {
            
            for (int j = numsSize-1; j > i; j-- ) {
                int tmpj = nums[j];
                if (tmpj + tmp == target) {
                    int arr[] = {i,j};
                    return arr;
                }
            }
            
        }
    }
    return nums;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int array[10] = {3,5,6,1,2,8,0,9,4,7};
    
    int tar = binarySearch(array, 2);
    printf("二分查找，查询目标的位置为:%d\n",tar);
  
    //冒泡排序
//    bubblingSort1(array, 10);
//    bubblingSort2(array, 10);
    
    //选择排序
//    selectSort(array, 10);
    
    //插入排序
//    insertSort(array, 10);
    
    //希尔排序
//    shellSort(array, 10);
    
    //快速排序
//    quickSort(array, 10);
    
    //归并排序
//    margeSort(array, 10);
    
    
    testSeqList();
//    createLinkList(10);
//    testLinkList();
//    testDLinkList();

    
    for (int i = 0; i < 10; i++) {
        printf("%d\n",array[i]);
    }
    
    
    char arrr[5] = {2};
    baseType(arrr);
    
    int re = fibonacci(4);
    printf("斐波那契:%d\n",re);
    
    char *str = "hello world";
    reversStr(str);

    return 0;
}



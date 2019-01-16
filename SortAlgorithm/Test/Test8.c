//
//  Test8.c
//  SortAlgorithm
//
//  Created by zhoufei on 2019/1/15.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  一道分解数字 为十位与个位的乘积的面试题

#include "Test8.h"

int resolveNum(int num) {
    int left = num/10;
    int reight = num%10;
    
    if (left > 0 && reight > 0) {
        int res = left * reight;
        resolveNum(res);
    }
    return num;
}


//选择排序
void selectSort2(int array2[], int length) {
    
    int index = 0;
    for (int i = 0; i < length; i++) {
        for (int j = length - 1; j > i; j--) {
            if (array2[j] < array2[j-1]) {
                index = j;
            }
            
            if (index > i) {
                int temp = array2[index];
                array2[index] = array2[i];
                array2[i] = temp;
            }
        }
    }
}

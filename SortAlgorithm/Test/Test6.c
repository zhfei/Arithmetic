//
//  Test6.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/1/13.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  字符串逆序
//  1.采用指针法，拿到第一个指针与最后一个指针，逐个交换。
//  2.采用递归法，一部分一部分的交换

#include "Test6.h"
#include <stdio.h>

void reversStr(char targetStr[]) {
    char *h = targetStr;
    char *l = targetStr;
    
    while ("\0" != *l) {
        l++;
    }
    l--;
    
    while (l > h) {
        char lc = *l;
        char hc = *h;
        *h = lc;
        *l = hc;
        h++;
        l--;
    }
    
    printf("%s\n",targetStr);
}


void reversStr2(char array[], int left, int right) {
    if (left >= rint) {
        return;
    }
    
    reversStr2(array, left + 1, right - 1);
    
    int temp = array[left];
    array[left] = array[right];
    array[right] = temp;
}

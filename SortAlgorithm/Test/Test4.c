//
//  Test4.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/1/13.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  二分查找，使用首下标和尾下标移动的方式。
//  当目标值比中间值大，则first = part + 1;

#include "Test4.h"

int binarySearchT(int array[], int targetNum) {
    int first = 0;
    int last = sizeof(array) - 1;
    
    while (first < last) {
        int part = (first + last)/2;
        
        if (targetNum == array[part]) {
            return part;
        }
        
        if (targetNum > array[part]) {
            first = part + 1;
        }
        
        if (targetNum < array[part]) {
            last = part - 1;
        }
    }
    
    return 0;
}

//
//  binarySearch.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/2/3.
//  Copyright © 2019年 周飞. All rights reserved.
//
// 二分查找
//  从有序数组中查找一个数字位置

#include <stdio.h>

int BinarySearch(int array[], int num) {
    int first = 0;
    int last = sizeof(array)-1;
    
    while (first < last) {
        int mid = (first + last)/2;
        
        if (array[mid] == num) {
            return mid;
        }
        
        if (num < array[mid]) {
            last = mid - 1;
        }
        
        if (num > array[mid]) {
            first = mid + 1;
        }
    }
    return first;
}

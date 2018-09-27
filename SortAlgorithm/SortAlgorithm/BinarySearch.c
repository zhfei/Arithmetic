//
//  BinarySearch.cpp
//  SortAlgorithm
//
//  Created by 周飞 on 2018/9/27.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "BinarySearch.h"

int binarySearch(int arr[], int num) {
    int first = 0;
    int last = sizeof(arr)-1;
    
    while (first <= last) {
        int mid = (first + last)/2;
        
        if (arr[mid] == num) {
            return mid;
        }
        
        if (num < arr[mid]) {
            last = mid - 1;
        }
        
        if (num > arr[mid]) {
            first = mid + 1;
        }
    }
    return first;
}

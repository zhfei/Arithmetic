//
//  QuickSort.c
//  SortAlgorithm
//
//  Created by 周飞 on 18/4/15.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  快速排序的原理：从数组中选择一个基准点，将大于等于它的放右边，小于等于它的放左边。
//  第一遍完成后，在分别对基数左边的数组和右边的数组分别执行同样的操作，然后继续递归调用
//

#include "QuickSort.h"

void swap(int k[], int low, int heigh) {

    int temp;
    
    temp = k[low];
    k[low] = k[heigh];
    k[heigh] = temp;
}

int Position(int k[], int low, int heigh) {
    
    int point;
    
    point = k[low];
    
    while (low < heigh) {
        
        while (low < heigh && k[heigh] >= point) {
            heigh--;
        }
        
        swap(k,low,heigh);
        
        while (low < heigh && k[low] <= point) {
            low++;
        }
        
        swap(k,low,heigh);
    }
    

    return low;
}


void QSort(int k[], int low, int heigh) {

    int point;
    
    if (low < heigh) {
        point = Position(k,low,heigh);
        
        QSort(k, low, point-1);
        QSort(k, point+1, heigh);
    }
}

void quickSort(int array[], int length) {

    printf("快速排序开始.....\n");
    
//    printf("排序前数组\n");
//    for (int i = 0; i< length; i++) {
//        printf("%d,",array[i]);
//    }
    
    QSort(array, 0, length-1);
    
//    printf("排序后数组\n");
//    for (int i = 0; i< length; i++) {
//        printf("%d,",array[i]);
//    }
}


//
//  MargeSort.c
//  SortAlgorithm
//
//  Created by 周飞 on 18/4/21.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  归并排序思想：先将一排数组元素拆分成最小有序数组单元（只有一个元素）
//  之后对相邻的两个单元两两合并，直到合并到最后一个有序数组结束。

#include "MargeSort.h"

void marging(int *list1,int list1_size,int *list2,int list2_size) {

    int i,j,k,m;
    int temp[10];
    
    i = j = k = m = 0;
    
    while (i < list1_size && j < list2_size) {
        
        if (list1[i] < list2[j]) {
            temp[k++] = list1[i++];
        } else {
            temp[k++] = list2[j++];
        }
    }
    
    while (i < list1_size) {
        temp[k++] = list1[i++];
    }
    
    while (j < list2_size) {
        temp[k++] = list2[j++];
    }
    
    for (m = 0; m < (list1_size + list2_size); m++) {
        list1[m] = temp[m];
    }
    
}

void margeSort(int array[], int length) {

    if (length > 1) {
        
        int *list1 = array;
        int list1_size = length/2;
        int *list2 = list1 + list1_size;
        int list2_size = length - list1_size;
        
        margeSort(list1, list1_size);
        margeSort(list2, list2_size);
        
        marging(list1, list1_size, list2, list2_size);
    }
    
    
}

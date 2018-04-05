//
//  BubblingSort.c
//  ArithmeticDemo
//
//  Created by 周飞 on 18/3/22.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  冒泡排序

#include "BubblingSort.h"
//拿第一个和后面所有的比较，小的移动到组头（非正规的冒泡排序）
void bubblingSort1(int array[], int length) {

    for (int i = 0; i < length -1; i++) {
        
        int index = i + 1;
        for (int j = index; j < length; j++) {
            
            if (array[j] < array[i]) {
                
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
                
            }
        }
    }
}

//从组尾，两两相邻比较，小的移动到前面（正规的冒泡排序）
void bubblingSort2(int array[], int length) {

    for (int i = 0; i < length; i++) {
        
        int index = length - 1;
        for (int j = index; j > i; j--) {
            
            if (array[j] < array[j - 1]) {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
        
    }

}

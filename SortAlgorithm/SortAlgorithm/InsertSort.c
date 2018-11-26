//
//  InsertSort.c
//  ArithmeticDemo
//
//  Created by 周飞 on 18/3/22.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "InsertSort.h"
//插入排序
//i = 1的意义是：第0个元素是一个有序数组，后面为无序数组
//关键点是：
//{3,5,1,6,7,8}
// 当i在1的下标时，判断是不是大于前面的5，若不大于，则进入循环，
//先判断（1>5）不成立时，5移动到1的位置，继续判断（3>5）,不成立时，3移动到5的位置，
void insertSort(int array[], int length) {

    
    for (int i = 1; i < length; i++) {
        
        int j, temp = array[i];
        
        if (array[i] < array[i - 1]) {
            
            int index = i - 1;
            for (j = index; array[j] > temp; j--) {
                array[j + 1] = array[j];
            }
            array[j+1] = temp;
        }
        
    }
}


//插入排序
void insertSort2(int list[], int length) {
    
    int tmep,position;
    for (int i = 1; i < length-1; i++) {
        tmep = list[i];
        if (tmep < list[i-1]) {
            for (int j = i; j > 0; j--) {
                if (list[j] < list[j-1]) {
                    list[j] = list[j-1];
                } else {
                    list[j-1] = tmep;
                    break;
                }
            }
        }
    }
    
}















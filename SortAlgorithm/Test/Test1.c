//
//  Test1.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/1/12.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  两个for循环
//  第一个从0->count-1 变量为i,条件i<count-1
//  第二个从count-1->i 变量为j,条件j>i


#include "Test1.h"
//冒泡排序
void bubblingSort(int array[], int count) {
    for (int i = 0; i < count; i++) {
        for (int j = count - 1; j > i; j--) {
            if (array[j] < array[j-1]) {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
    
    
}

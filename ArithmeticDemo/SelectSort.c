//
//  SelectSort.c
//  ArithmeticDemo
//
//  Created by 周飞 on 18/3/22.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "SelectSort.h"
//拿第一个和后面所有的比较，记录最小的下标，如果和当前i不一样，就进行交换（和非正规的冒泡排序相似）
void selectSort(int array[], int length) {

    for (int i = 0; i < length; i++) {
        
        int index = i + 1;
        int minIndex = i;
        for (int j = index; j < length; j++) {
            
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        
        if (i != minIndex) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}

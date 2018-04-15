//
//  ShellSort.c
//  ArithmeticDemo
//
//  Created by 周飞 on 18/3/22.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "ShellSort.h"
//希尔排序主要思想是先分组，然后在多个组上，按照相同的下标逐个进行排序
//可以改造多种基本排序
void shellSort(int array[], int length) {

    
    int gap = length;
    
    do {
        
        gap = gap/3 + 1;
        
        for (int i = gap; i < length; i++) {
            
            int j, temp;
            
            if (array[i] < array[i - gap]) {
                
                temp = array[i];
                int index = i - gap;
                for (j = index; array[j] > temp; j-=gap) {
                    array[j + gap] = array[j];
                }
                array[j+gap] = temp;
            }
            
        }
        
    } while (gap > 1);
    
}

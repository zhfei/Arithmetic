//
//  ShellSort.c
//  ArithmeticDemo
//
//  Created by 周飞 on 18/3/22.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "ShellSort.h"
//希尔排序主要思想是先对整个数组进行动态分段，分段间隔逐渐缩小，直到间隔向临。
//然后将不同分组间，对应开始位置的元素看作一个数组，然后对这个数组进行插入排序。
//可以改造多种基本排序

//跳跃式比较排序，如：{3,1,5,6,4,2,9,7,8,0}

void shellSort(int array[], int length) {

    
    int gap = length;//10
    
    do {
        
        gap = gap/3 + 1;//4
        
        for (int i = gap; i < length; i++) {
            
            int j, temp;
            
            for (int inde = 0; inde < length; inde++) {
                printf("%d-----i=:%d\n",array[inde],i);
            }
            printf("我是分割线\n\n\n");
        
            
            if (array[i] < array[i - gap]) {
                temp = array[i];
                for (j = i - gap; j>=0 && array[j] > temp; j-=gap) {
                    array[j + gap] = array[j];
                }
                array[j+gap] = temp;
            }
            
        }
        
    } while (gap > 1);
    
}

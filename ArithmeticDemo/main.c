//
//  main.c
//  ArithmeticDemo
//
//  Created by 周飞 on 18/3/22.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include <stdio.h>
#include "BubblingSort.h"
#include "SelectSort.h"
#include "InsertSort.h"
#include "shellSort.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int array[10] = {3,5,6,1,2,8,0,9,4,7};
  
    //冒泡排序
//    bubblingSort1(array, 10);
//    bubblingSort2(array, 10);
    
    //选择排序
//    selectSort(array, 10);
    
    //插入排序
//    insertSort(array, 10);
    
    //希尔排序
    shellSort(array, 10);

    
    for (int i = 0; i < 10; i++) {
        printf("%d\n",array[i]);
    }
    
    
    printf("Hello, World!\n");
    return 0;
}

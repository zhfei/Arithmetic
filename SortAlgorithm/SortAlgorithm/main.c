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
#include "QuickSort.h"
#include "MargeSort.h"
#include "BinarySearch.h"

#include "SequenceList.h"
#include "LinkList.h"
#include "DoubleLinkList.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int array[10] = {3,5,6,1,2,8,0,9,4,7};
    
    int tar = binarySearch(array, 2);
    printf("二分查找，查询目标的位置为:%d\n",tar);
  
    //冒泡排序
//    bubblingSort1(array, 10);
//    bubblingSort2(array, 10);
    
    //选择排序
//    selectSort(array, 10);
    
    //插入排序
//    insertSort(array, 10);
    
    //希尔排序
//    shellSort(array, 10);
    
    //快速排序
//    quickSort(array, 10);
    
    //归并排序
//    margeSort(array, 10);
    
    
    testSeqList();
//    createLinkList(10);
//    testLinkList();
//    testDLinkList();

    
    for (int i = 0; i < 10; i++) {
        printf("%d\n",array[i]);
    }

    return 0;
}

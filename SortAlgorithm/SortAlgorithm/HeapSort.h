//
//  HeapSort.h
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/26.
//  Copyright © 2018年 周飞. All rights reserved.
//

#ifndef HeapSort_h
#define HeapSort_h

#include <stdio.h>

typedef struct HeapNode {
    int length;
    int data[];
}HeapNode, *SqList;

void heapSort(SqList L);

#endif /* HeapSort_h */

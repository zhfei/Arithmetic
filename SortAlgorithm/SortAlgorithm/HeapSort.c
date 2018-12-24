//
//  HeapSort.c
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/26.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "HeapSort.h"



void swap_(SqList L, int postion1 , int postion2) {
    if (L->length-1 < postion1 || L->length-1 < postion2) {
        return;
    }
    
    int temp = L->data[postion1];
    L->data[postion1] = L->data[postion2];
    L->data[postion2] = temp;
}

/* 已知L->r[s..m]中记录的关键字除L->r[s]之外     均满足堆的定义 */
/* 本函数调整L->r[s]的关键字，使L->r[s..m]成    为一个大顶堆 */
void HeapAdjust(SqList L, int s, int m) {
    int temp, j;
    temp = L->data[s];
    
    /* 沿关键字较大的孩子结点向下筛选 */
    for (j = 2*s; j <= m; j *= 2) {
        if (j < m && L->data[j] < L->data[j + 1] ) {
            /* j为关键字中较大的记录的下标 */
            ++j;
        }
        
        if (temp >= L->data[j]) {
            /* rc应插入在位置s上 */
        }
        
        L->data[s] = L->data[j];
        s = j;
    }
    
    //插入
    L->data[s] = temp;
}


void heapSort(SqList L) {
    
    int i;
    //构建大顶堆
    for (i = L->length/2; i > 0; i--) {
        HeapAdjust(L, i, L->length);
    }
    
    for (i = L->length; i > 1; i--) {
        //将堆顶节点与列表最后一个节点交换
        swap_(L, 1, i);
        //将i-1个数据重新构建大顶堆
        HeapAdjust(L, 1, i-1);
    }
}



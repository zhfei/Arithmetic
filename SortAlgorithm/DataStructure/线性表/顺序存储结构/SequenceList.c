//
//  SequenceList.c
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/12.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "SequenceList.h"
#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALUSE 0

typedef int Status;
typedef int ElemteType;
typedef int* pElemteType;

/**
 顺序结构的线性表，获得指定为的元素

 @param list  顺序结构的线性表
 @param i 第i个位置
 @param e 获取元素赋给e
 @return 结果状态
 */
Status getElmete(pElemteType s, int i, ElemteType *e) {
    //1.错误异常情况判断：i的下标越界，数组为空
    //2.取出值赋给e
    *e = s[i];
    return 0;
}


/**
 顺序结构的线性表，插入元素到指定位置
 */
Status insertElmete(pElemteType s, int i, ElemteType e) {
    //1.错误异常情况判断：i的下标越界，数组为空
    //2.取出值赋给e
    int count = sizeof(s)/sizeof(int);
    printf("个数：%d",count);
    return 0;
}

pElemteType createSeqList() {
    int array[10] = {0};
    
    for (int i = 0; i < 10; i++) {
        printf("第：%d个元素--int: %d\n",i,array[i]);
    }
    return array;
}

void testSeqList() {
    pElemteType p = createSeqList();
    insertElmete(p, 5, 33);
}

//
//  StaticLinkList.c
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/15.
//  Copyright © 2018年 周飞. All rights reserved.
//



#include "StaticLinkList.h"
#include <stdlib.h>

typedef int ElemType;

typedef struct SLLNode {
    int curr;//下一个节点，在顺序存储结构中的下标
    ElemType data;
}SLLNode, *pSLLNode;

pSLLNode createStaticLinkList() {
    SLLNode sll[10];
    return sll;
}

int Malloc_SLL(pSLLNode p) {
    int i = p[0].curr;
    
    if (p[0].curr) {
        p[0].curr = p[i].curr;
    }
    return i;
}

void insertEle(pSLLNode p, int i, ElemType e) {
    
}



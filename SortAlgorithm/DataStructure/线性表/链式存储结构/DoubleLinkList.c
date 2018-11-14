//
//  DoubleLinkList.c
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/13.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "DoubleLinkList.h"
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

#define LinkList(name)  int name[20]

typedef struct DLNode {
    struct DLNode *prior;//前驱指针
    struct DLNode *next;//后继指针
    ElemType data;
} DLNode, *pDLNode;


pDLNode createDLinkList(int count) {
    pDLNode header = (pDLNode)malloc(sizeof(DLNode));
    pDLNode tailer = header;
    tailer->next = NULL;
    tailer->prior = NULL;
    
    for (int i = 0; i< count; i++) {
        pDLNode newNode = (pDLNode)malloc(sizeof(DLNode));
        newNode->next = NULL;
        newNode->prior = tailer;
        
        tailer->next = newNode;
        tailer = newNode;
    }
    
    pDLNode p = header->next;
    for (int i = 0; i < count; i++) {
        printf("当前元素为：%p\n",p);
        printf("第：%d 个元素的前驱指针：%p\n",i+1,p->prior);
        printf("第：%d 个元素的后继指针：%p\n",i+1,p->next);
        p = p->next;

    }
    return header;
}

void insertDoubleLinkList(pDLNode L, DLNode node, int i) {
    pDLNode header = L;
    pDLNode tailer = header->next;
    int count = 0;
    while (tailer && count < i) {
        count++;
        tailer = tailer->next;
    }
    
    if (count < i) {
        printf("元素不存在...");
    }
    
    pDLNode nodee = (pDLNode)malloc(sizeof(DLNode));
    nodee->data = node.data;
    
    tailer->next->prior = nodee;
    nodee->next = tailer->next;
    nodee->prior = tailer;
    tailer->next = nodee;
}


void testDLinkList() {
    createDLinkList(10);
}



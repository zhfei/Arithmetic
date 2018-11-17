//
//  QueueList.c
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/17.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "QueueList.h"
#include <stdlib.h>

typedef int QLElemteType;
typedef int State;
typedef struct QLNode {
    QLElemteType data;
    struct QLNode *next;
}QLNode, *pQLNode;

typedef struct QueueList {
    pQLNode print,rear;//头指针,尾指针
}QueueList, *pQueueList;


pQueueList createQueueList() {
    pQLNode header = (pQLNode)malloc(sizeof(QLNode));
    header->next = NULL;
    
    pQueueList p = (pQueueList)malloc(sizeof(QueueList));
    p->print = header;
    p->rear = header;
    return p;
}

State enQueue(pQueueList q, QLElemteType e) {
    pQLNode p = (pQLNode)malloc(sizeof(QLNode));
    if (!p) {
        exit(-100);
    }
    p->data = e;
    p->next = NULL;
    
    if (q->print == q->rear) {
        q->rear->next = p;
        q->rear = p;
    } else {
        q->rear = p;
    }
    return 1;
}

State delQueue(pQueueList q, QLElemteType *e) {
    if (q->print == q->rear) {
        return -1;
    }

    pQLNode pQ = q->print->next;
    *e = pQ->data;
    q->print->next = pQ->next;
    if (q->rear == pQ) {
        q->rear = q->print;
    }
    
    free(pQ);
    return 1;
}

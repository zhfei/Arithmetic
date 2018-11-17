//
//  Queue.c
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/17.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "Queue.h"

#define MAXSIZE 10
typedef int ElemteType;
typedef int State;
typedef struct Queue {
    ElemteType data[MAXSIZE];
    int front;//头指针
    int rear;//尾指针，指向最后一个元素的下一个位置（该位置可用）
}Queue, *pQueue;

//初始化操作，建立一个空队列Q。
void InitQueue(pQueue p) {
    p->front = 0;
    p->rear = 0;
}
//若队列Q存在，则销毁它。
void DestroyQueue(pQueue p) {
    
}
//将队列Q清空。
void ClearQueue(pQueue p) {
    
}
//若队列Q为空，返回true，否则返回false。
void QueueEmpty(Queue p) {
    
}
//若队列Q存在且非空，用e返回队列Q的队头元素。
void GetHead(Queue p, ElemteType *e) {
    
}
//若队列Q存在，插入新元素e到队列Q中并成为队尾元素。
State EnQueue(pQueue p, ElemteType e) {
    if ((p->rear + 1)%MAXSIZE == p->front) {
        //已经满了
        return -1;
    }
    
    p->data[p->rear] = e;
    p->rear = (p->rear + 1)%MAXSIZE;
    
    return 1;
}
//删除队列Q中队头元素，并用e返回其值。
State DeQueue(pQueue p, ElemteType *e) {
    if (p->rear == p->front) {
        //空栈
        return -1;
    }
    *e = p->data[p->front];
    p->front = (p->front + 1)%MAXSIZE;
    return 1;
}
//返回队列Q的元素个数
int QueueLength(Queue p) {
    return (p.rear - p.front + MAXSIZE)%MAXSIZE;
}

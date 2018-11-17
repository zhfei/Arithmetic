//
//  Queue.h
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/17.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  顺序存储结构下的循环队列

#ifndef Queue_h
#define Queue_h

#include <stdio.h>

/*
 ADT
 队列是一种特殊的线性表，数据元素类型相同，各元素间具有前驱后继关系，先进先出（同管道）
 Operation
 InitQueue(*Q):    初始化操作，建立一个空队列Q。
 DestroyQueue(*Q): 若队列Q存在，则销毁它。
 ClearQueue(*Q):   将队列Q清空。
 QueueEmpty(Q):    若队列Q为空，返回true，否则返回false。
 GetHead(Q, *e):   若队列Q存在且非空，用e返回队列Q的队头元素。
 EnQueue(*Q, e):   若队列Q存在，插入新元素e到队列Q中并成为队尾元素。
 DeQueue(*Q, *e):  删除队列Q中队头元素，并用e返回其值。
 QueueLength(Q):   返回队列Q的元素个数
 ADTEND
 

 */

#endif /* Queue_h */

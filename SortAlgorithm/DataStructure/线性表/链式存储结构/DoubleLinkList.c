//
//  DoubleLinkList.c
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/13.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "DoubleLinkList.h"

typedef int ElemType;

#define LinkList(name)  int name[20]

typedef struct DoubleLinkListNode {
    struct DoubleLinkListNode *prior;//前驱指针
    struct DoubleLinkListNode *next;//后继指针
    ElemType data;
} DoubleLinkListNode;

void insertDoubleLinkList(LinkList(list), DoubleLinkListNode node, int i) {
    
}

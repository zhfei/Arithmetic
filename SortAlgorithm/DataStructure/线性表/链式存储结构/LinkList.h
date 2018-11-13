//
//  LinkList.h
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/13.
//  Copyright © 2018年 周飞. All rights reserved.
//

#ifndef LinkList_h
#define LinkList_h
typedef int ElemteType;

typedef struct Node {
    struct Node *next;
    ElemteType data;
}Node,*pNode;


#include <stdio.h>

pNode createLinkList(int count);

#endif /* LinkList_h */

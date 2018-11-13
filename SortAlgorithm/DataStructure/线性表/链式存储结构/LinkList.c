//
//  LinkList.c
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/13.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "LinkList.h"
#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALUSE 0

#define LinkList(name)  int name[20]

typedef int Status;



/**
 获取单向链表list的第i个元素，并赋值给e

 @param list 单向链表
 @return 状态
 */
Status getElement(LinkList(list),int i, ElemteType *e) {
    
    
    
    
    return 1;
}


pNode createLinkList(int count) {
    pNode header = (pNode)malloc(sizeof(Node));
    pNode tailer = header;
    tailer->next = NULL;
    
    for (int i = 0; i< count; i++) {

        pNode newNode = (pNode)malloc(sizeof(Node));
        newNode->data = i;
        newNode->next = NULL;
        
        tailer->next = newNode;
        tailer = newNode;
    }
    
    pNode p= header->next;
    int num = 1;
    while (p) {
        printf("num:%d  ,P:%p\n",num,p);
        p = p->next;
        num++;
    }
    
    return header;
}

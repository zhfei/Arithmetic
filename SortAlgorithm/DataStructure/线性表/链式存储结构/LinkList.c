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

typedef int Status;


/**
 获取单向链表list的第i个元素，并赋值给e

 @param list 单向链表
 @return 状态
 */
Status getElement(pNode L,int index, ElemteType *e) {
    
    pNode p = L->next;
    int num = 1;
    while (p && num < index) {
        num++;
        p = p->next;
    }
    
    if (num < index) {
        printf("不存在。。");
    }
    
    *e = p->data;
    
    return 1;
}

Status insertElement(pNode L,int index, ElemteType e) {
    
    pNode p = L->next;
    int num = 2;//获得要插入位置的前一个节点
    while (p && num < index) {
        num++;
        p = p->next;
    }
    
    if (num < index) {
        printf("不存在。。");
    } else {
        printf("插入前，index节点:%d,的值：%d\n",index,p->next->data);
        pNode newNode = (pNode)malloc(sizeof(Node));
        newNode->data = e;
        newNode->next = p->next;
        p->next = newNode;
        printf("插入后，index节点:%d,的值：%d\n",index,p->next->data);
    }
    
    
    
    return 1;
}

Status removeElement(pNode L,int index, ElemteType *e) {
    
    pNode p = L->next;
    int num = 2;//获得要插入位置的前一个节点
    while (p && num < index) {
        num++;
        p = p->next;
    }
    
    if (num < index) {
        printf("不存在。。");
    } else {
        printf("删除前，index节点:%d,的值：%d\n",index,p->next->data);
        pNode delNode = p->next;
        p->next = delNode->next;
        free(delNode);
        
        printf("删除后，index节点:%d,的值：%d\n",index,p->next->data);
    }
    
    
    
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

void testLinkList() {
    pNode p = createLinkList(10);
    
//    ElemteType e;
//    while (1) {
//        int count;
//        printf("请输入信息：");
//        scanf("%d",&count);
//        getElement(p, count, &e);
//        printf("结果: %d\n",e);
//    }
    
    
    while (1) {
        int index;
        int value;
        printf("请输入信息（位置，数据）：");
        scanf("%d\n%d",&index,&value);
        insertElement(p, index, value);
        printf("结果: %d\n",value);
    }
    
}

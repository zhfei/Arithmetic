//
//  LinkStack.c
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/17.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "LinkStack.h"
#include <stdlib.h>

typedef int LSElemteType;
typedef int State;
typedef struct LSNode {
    LSElemteType data;
    struct LSNode *next;
}LSNode, *pLSNode;

typedef struct LinkStack {
    pLSNode top;//头指针
    int count;//个数
}LinkStack, *pLinkStack;

pLinkStack createLinkStack() {
    pLinkStack p = (pLinkStack)malloc(sizeof(LinkStack));
    p->top = NULL;
    p->count = 0;
    return p;
}

State push(pLinkStack p, LSElemteType e) {
    pLSNode n = (pLSNode)malloc(sizeof(LSNode));
    n->data = e;
    n->next = NULL;
    
    if (p->top == NULL) {
        p->top = n;
        p->count = 1;
    } else {
        n->next = p->top;
        p->top = n;
        p->count++;
    }
    return 1;
}

State pop(pLinkStack p, LSElemteType *e) {
    if (p->top == NULL) {
        return -1;
    } else {
        *e = p->top->data;
        pLSNode pn = p->top;
        p->top = p->top->next;
        p->count--;
        free(pn);
        return 1;
    }
    
    return 1;
}

void testLinkStack() {
    
}

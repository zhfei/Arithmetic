//
//  SqDoubleStack.c
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/17.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "SqDoubleStack.h"
#include <stdlib.h>

#define MAXSIZE 10
typedef int SqDouElemteType;
typedef int State;
typedef struct Stack {
    SqDouElemteType data[MAXSIZE];
    int top1;//栈1顶端指针
    int top2;//栈2顶端指针
}SqDouStack, *pSqDouStack;

pSqDouStack createSqDouStack() {
    pSqDouStack p = (pSqDouStack)malloc(sizeof(SqDouStack));
    p->top1 = -1;
    p->top2 = MAXSIZE;
    return p;
}

State pushDouStack(pSqDouStack p, SqDouElemteType e1, SqDouElemteType e2) {
    if (p->top1+1 == p->top2) {
        //已经满
        return -2;
    } else if (p->top1+1 - p->top2 == -1) {
        //还有一个空间可以插入
        p->data[++p->top1] = e1;
        return -1;
    } else if (p->top1+1 - p->top2 <= -2) {
        //还有超过两个空间可以插入
        p->data[++p->top1] = e1;
        p->data[--p->top1] = e2;
        return 1;
    }
    return 1;
}

State popDouStack(pSqDouStack p, SqDouElemteType *e1, SqDouElemteType *e2) {
    if (p->top1+1 - p->top2 > 0) {
        //结构报错
        return -2;
    }
    *e1 = p->data[p->top1--];
    *e2 = p->data[p->top2--];
    return 1;
}

void testSqDouStack() {
    pSqDouStack p = createSqDouStack();

}

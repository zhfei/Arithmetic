//
//  Stack.c
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/15.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "Stack.h"
#include <stdlib.h>

#define MAXSIZE 10
typedef int ElemteType;
typedef int State;
typedef struct Stack {
    ElemteType data[MAXSIZE];
    int top;
}Stack, *pStack;
// 顺序结构类型栈
pStack createStack(){
    pStack p = (pStack)malloc(sizeof(Stack));
    p->top = -1;
    return p;
}

State pushStack(pStack p, ElemteType e) {
    if (p->top == MAXSIZE - 1) {
        return -1;
    }
    pStack p0 = createStack();
    p0->data[++p0->top] = e;
    
    return 1;
}

State popStack(pStack p, int index, ElemteType *e) {
    if (p->top == -1) {
        return -1;
    }
    
    pStack p0 = createStack();
    *e = p0->data[p0->top--];
    
    return 1;
}





// 链式结构类型栈


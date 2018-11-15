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

pStack createStack(){
    pStack p = malloc(sizeof(Stack));
    return p;
}

State push(pStack p, ElemteType e) {
    
    
    
    return 1;
}

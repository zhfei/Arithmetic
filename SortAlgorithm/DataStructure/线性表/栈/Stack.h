//
//  Stack.h
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/15.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  栈：一种特殊的线性表，尾端进入，尾端出去。push pop

#ifndef Stack_h
#define Stack_h

#include <stdio.h>


//栈的抽象数据结构描述
/*
 ADT
 栈是一种特殊的线性表，数据元素类型相同，各元素间具有前驱后继关系，先进后出
 Operation
     InitStack(*S):    初始化操作，建立一个空栈S。
     DestroyStack(*S): 若栈存在，则销毁它。
     ClearStack(*S):   将栈清空。
     StackEmpty(S):    若栈为空，返回true，否则返回false。
     GetTop(S, *e):    若栈存在且非空，用e返回S的栈顶元素。
     Push(*S, e):      若栈S存在，插入新元素e到栈S中并成为栈顶元素。
     Pop(*S, *e):      删除栈S中栈顶元素，并用e返回其值。
     StackLength(S):   返回栈S的元素个数。
 ADTEND
 
 
 栈的应用：
 递归入栈
 后波兰式四则运算
 
 */

#endif /* Stack_h */

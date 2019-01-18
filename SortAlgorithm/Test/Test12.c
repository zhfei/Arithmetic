//
//  Test12.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/1/18.
//  Copyright © 2019年 周飞. All rights reserved.
//

#include "Test12.h"
#include <stdio.h>

// 不用中间变量，用两种方法交换两个数的值
//+,-法交换
void exchangeNum1(int a, int b) {
    // a = 2,  b = 3
    a = a + b; //a = 5
    b = a - b; //b = 5 - 3 = 2
    a = a - b; //a = 5 - 2 = 3;
}
//*，/法交换，对应上面的+,-
void exchangeNum2(int a, int b) {
    a = a * b;
    b = a / b;
    a = a / b;
}
//异或：对应的两位 相同为0， 不同为1
void exchangeNum3(int a, int b) {
    //a = 1 = 001
    //b = 3 = 011
    
    a = a ^ b; //a= 010
    b = a ^ b; //b= 001
    a = a ^ b; //a= 011
}


//-------------------------------------------------------
//求两个数的最大公约数
//扩展：最小公倍数 = (a * b)/最大公约数
void commonDivisor3(int a, int b) {
    int flag = a < b?:b;
    int num = 1;
    int result = 0;
    while (num++ <= flag) {
        if (a % num == 0 && b % num == 0) {
            result = num;
        }
    }
}


//----------------------------------------------------------
//模拟栈操作
//1.先定义一个栈
#define stackMax 1024
static int stack[stackMax];
static int count = 0;

void push(int num) {
    if (count >= stackMax) {
        printf("栈满了！");
    } else {
        stack[count++] = num;
    }
}

int pop(){
    if (count <= 0) {
        printf("空栈了！");
        return 0;
    } else {
        return stack[count--];
    }
}

int top(){
    if (count <= 0) {
        printf("空栈了！");
        return 0;
    } else {
        return stack[count--];
    }
}

int isEmpty() {
    if (count <= 0) {
        printf("空栈了！");
        return 1;
    } else {
        return 0;
    }
}

int isFill() {
    if (count == stackMax) {
        printf("满栈了！");
        return 1;
    } else {
        return 0;
    }
}


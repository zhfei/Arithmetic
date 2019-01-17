//
//  Test10.c
//  SortAlgorithm
//
//  Created by zhoufei on 2019/1/17.
//  Copyright © 2019年 周飞. All rights reserved.
//

#include "Test10.h"
//给定一个字符串，输出本字符串中只出现一次并且最靠前的那个字符的位置？如“abaccddeeef”,
//字符是b,输出应该是2

//比较方法
//传如一个字符和 字符串指针
//利用while循环，将指针逐个增加与这个字符进行比较
//若有一次相等，就返回1，其他的都返回0
int conditionChar(char targetC, char * str) {
    
    int count = 0;
    while (*str != "\0") {
        if (targetC == *str) {
            count++;
        }
        str++;
    }
    
    if (count == 1) {
        return 1;
    } else {
        return 0;
    }
}

//取出字符指针的开始的每个字符，同整个字符川进行比较。
//将每一个只出现了一次的结果存在一个数组中，最后打印。
void printResult(char *pStr) {
    char c = *pStr;
    char *p = pStr;
    
    int arr[100];
    int index = 0;
    
    while (*p != "\0") {
        if (conditionChar(c, pStr) == 1) {
            arr[index] = c;
            index++;
        }
        c = *(p++);
    }
    
    int count = 0;
    while (arr[0] != *p) {
        p++;
        count++;
    }
    
    printf("%d",count);
}

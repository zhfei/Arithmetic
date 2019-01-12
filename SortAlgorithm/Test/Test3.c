//
//  Test3.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/1/13.
//  Copyright © 2019年 周飞. All rights reserved.
//  阶乘 factorial
//

#include "Test3.h"
//阶乘
int factorial(int n) {
    if (n > 100) {
        return -1; //数据过大
    }
    
    if (n == 1) {
        return 1;
    }
    
    return n * factorial(n-1);
    
}

//Fibonacci数列 斐波那契额数列

int fibonacci(int n){
    if (n <= 1) {
        return 1;
    }
    
    return fibonacci(n-2) + factorial(n - 1);
}


//
//  Fibonacci Implementation.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/2/3.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  斐波那契数列(兔子数列)实现
//  1、1、2、3、5、8、13

#include "Fibonacci Implementation.h"
//计算斐波那契数列第n天时，有多少个兔子
int fibonacci(int n) {
    if (n < 2) {
        return 1;
    } else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

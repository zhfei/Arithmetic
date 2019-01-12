//
//  Test2.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/1/13.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  greatest common divisor(gcd) 最大公约数
//  最大公约数：n个数能同事被一个数整除的最大数
//  最小公倍数：n个数的共同最小倍数。所有公共整除的乘积

#include "Test2.h"
//穷举法
int gcd(int a, int b) {
    int i = 1;
    int t = 1;
    
    while (i < a && i < b) {
        if (a%i == 0 && b%i ==0) {
            t = i;
            i++;
        }
    }
    
    return t;
}

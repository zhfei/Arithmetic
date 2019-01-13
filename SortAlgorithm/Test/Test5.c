//
//  Test5.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/1/13.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  质数：在大于1的自然数中，只能被自己和1整除的数。其他都是合数。
//  采用穷举法，逐个逐个试

#include "Test5.h"

int isPrimeNumber(int num) {
    if (num <= 1) {
        return 0;
    }
    
    int tmp = num - 1;
    
    while (tmp > 1) {
        if (num % tmp == 0) {
            return 0;
        } else {
            tmp--;
        }
    }
    return 1;
}

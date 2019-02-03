//
//  Is Prime.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/2/3.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  是否为质数
//  质数：在大于1的范围内，只能被1和自己整除

#include <stdio.h>

int IsPrime(int num) {
    if (num <= 1) {
        return 0;//fauls
    }
    
    int tmep = num - 1;
    
    for (int i = 2; i < tmep; i++) {
        if (tmep % i == 0) {
            return 0;
        }
    }
    return 1;
}

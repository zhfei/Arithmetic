//
//  Test8.c
//  SortAlgorithm
//
//  Created by zhoufei on 2019/1/15.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  一道分解数字 为十位与个位的乘积的面试题

#include "Test8.h"

int resolveNum(int num) {
    int left = num/10;
    int reight = num%10;
    
    if (left > 0 && reight > 0) {
        int res = left * reight;
        resolveNum(res);
    }
    return num;
}

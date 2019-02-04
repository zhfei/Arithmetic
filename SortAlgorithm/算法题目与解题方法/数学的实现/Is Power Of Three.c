//
//  Is Power Of Three.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/2/4.
//  Copyright © 2019年 周飞. All rights reserved.
//
// 是否为3的幂数
// 用穷举法，一直除3，直到最后商为1

#include <stdio.h>

int IsPowerOfThree(int num) {
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        
        if (num % 3 == 0 ) {
            if (num / 3 == 1) {
                return 1;
            } else {
                return IsPowerOfThree(num / 3);
            }
        } else {
            return 0;
        }
    }
}

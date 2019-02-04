//
//  Is Power Of Two.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/2/3.
//  Copyright © 2019年 周飞. All rights reserved.
//
// 是否为2的幂数
// 啥叫幂数， 幂数指一个数字自乘了多少次，比如立方是一个数的3次幂

/*
 思路：2，4，8，16，32....都是2的n次幂
 
 转换为二进制分别为：
 
 10    100    1000   10000    100000
 
 这些数减1后与自身进行按位与，如果结果为0，表示这个数是2的n次幂
 
 01    011    0111   01111    011111

 
 */

#include <stdio.h>

int IsPowerOfTwo (int num ) {
    if (num < 1) {
        return 0;
    }
    
    int num2 = num - 1;
    
    if (num & num2 == 0) {
        return 1;
    }
    
    return 0;
    
}

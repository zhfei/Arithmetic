//
//  Test12.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/1/18.
//  Copyright © 2019年 周飞. All rights reserved.
//

#include "Test12.h"

// 不用中间变量，用两种方法交换两个数的值
void exchangeNum1(int a, int b) {
    // a = 2,  b = 3
    a = a + b; //a = 5
    b = a - b; //b = 5 - 3 = 2
    a = a - b; //a = 5 - 2 = 3;
}
//对应上面的+,-
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

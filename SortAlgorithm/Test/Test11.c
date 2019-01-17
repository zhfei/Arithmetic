//
//  Test11.c
//  SortAlgorithm
//
//  Created by zhoufei on 2019/1/17.
//  Copyright © 2019年 周飞. All rights reserved.
//

#include "Test11.h"
//打印0-100之间的素数
//质数（素数）：在大于1的范围内，只能被1和自己整除
//和数：在自然数范围内，除了质数外，都是和数
void primeNumber1_100() {
    int arr[100];
    int index = 0;
    int origin = 100;
    
    for (int i = 2; i <= 100; i++) {
        for (int j = 2; j <= i; j++) {
            if (i%j == 0) {
                if (i==j) {
                    arr[index] = i;
                    index++;
                }
            }
        }
    }
    
    for (int m = 0; m< index; m++) {
        printf("%c\n",arr[m]);
    }
    
}

//
//  Count Primes.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/2/4.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  在n 的范围内有多少个质数


#include <stdio.h>

int isPrimes(int n) {
    if (n <= 1) {
        return 0;
    }
    
    int tmp = n - 1;
    for (int i = 2; i < tmp; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int CountPrimes(int n) {
    int count = 0;
    for (int i = 0; i < n ; i++) {
        if (isPrimes(i)) {
            count++;
        }
    }
    return count;
}

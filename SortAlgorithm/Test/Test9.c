//
//  Test9.c
//  SortAlgorithm
//
//  Created by zhoufei on 2019/1/15.
//  Copyright © 2019年 周飞. All rights reserved.
//

#include "Test9.h"
//字符串反转
void reversalStr2(char str[]) {
    char *first = str;
    char *last = str;
    while (*last != "\0") {
        last++;
    }
    last--;
    
    while (last != first) {
        char fc = *first;
        char lc = *last;
        
        *first = lc;
        *last = fc;
        first++;
        last--;
    }
    printf("%s",str);
}
//归并排序

void mergerAction2(int array1[], int length1, int array2[], int length2) {
    
}

void mergerArray2(int numArray[], int length) {
    if (length > 1) {
        int *array1 = numArray;
        int length1 = length/2;
        int *array2 = numArray + length1;
        int length2 = length - length1;
        
        
    }
}

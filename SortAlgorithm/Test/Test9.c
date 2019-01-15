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
static int arrayLength = 10;
void mergerAction2(int array1[], int length1, int array2[], int length2) {
    int i,j,k,m;
    int tmp[arrayLength];
    i=j=k=m=0;
    
    while (i<length1 && j<length2) {
        if (array1[i] < array2[j]) {
            tmp[k++] = array1[i++];
        } else {
            tmp[k++] = array2[j++];
        }
    }
    
    while (i < length1) {
        tmp[k++] = array1[i++];
    }
    
    while (j < length2) {
        tmp[k++] = array2[j++];
    }
    
//    for (<#initialization#>; <#condition#>; <#increment#>) {
//        <#statements#>
//    }
    
}

void mergerArray2(int numArray[], int length) {
    if (length > 1) {
        int *array1 = numArray;
        int length1 = length/2;
        int *array2 = numArray + length1;
        int length2 = length - length1;
        
        
    }
}

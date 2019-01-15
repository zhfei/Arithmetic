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
//利用数组第一个元素的指针和数组长度，将数组平均分成两部分。获得4个变量
//第一部分的首指针和长度。第二部分的首指针和长度。
//合并时，用两部分数组分别去下标元素进行比较，3个while后，合并到一个tmp数组中
//最后讲tmp数组的内容逐个填写到array1上。
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
    
    for (m = 0; m < (length1 + length2); m++) {
        array1[m] = tmp[m];
    }
}

void mergerArray2(int numArray[], int length) {
    if (length > 1) {
        int *array1 = numArray;
        int length1 = length/2;
        int *array2 = numArray + length1;
        int length2 = length - length1;
        
        
    }
}

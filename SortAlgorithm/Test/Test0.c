//
//  Test0.c
//  SortAlgorithm
//
//  Created by 周飞 on 2019/1/12.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  随意找出一个元素，通过遍历比较，将比他大的全部移动它右，比他下的移动到左。
//  就能得出这个元素的真实位置。
//  然后以这个元素的位置为标志，作用再分别递归两边的内容。

#include "Test0.h"

void tSwap(int k[], int low, int heigh) {
    int temp = k[low];
    k[low] = k[heigh];
    k[heigh] = temp;
}
// 获得第一元素的位置
int tPosition(int k[], int low, int heigh) {
    int point;
    point = k[low];
    
    while (low < heigh) {
        while (low < heigh && k[heigh] >= point) {
            heigh--;
        }
        
        tSwap(k, low, heigh);
        
        while (low < heigh && k[low] <= point) {
            low++;
        }
        
        tSwap(k, low, heigh);
    }
    
    return low;
}

//快排
void tquickSortTest(int k[], int low, int heigh) {
    if (low < heigh) {
        int pos = tPosition(k, low, heigh);
        //不断根据拿到的位置分割，进行递归
        tquickSortTest(k, low, pos-1);
        tquickSortTest(k, pos+1, heigh);
    }
    
    
}

//
//  LeeCode.c
//  SortAlgorithm
//
//  Created by zhoufei on 2019/2/27.
//  Copyright © 2019年 周飞. All rights reserved.
//

#include "LeeCode.h"

//两数之和等于目标数的 下标数组
//利用冒泡排序的两个for循环思想
int* twoSum(int* nums, int numsSize, int target) {
    static int res[2] = {0};
    for (int i = 0; i< numsSize; i++) {
        int tmp = nums[i];
        if (target > tmp) {
            
            for (int j = numsSize-1; j > i; j-- ) {
                int tmpj = nums[j];
                if (tmpj + tmp == target) {
                    res[0] = i;
                    res[i] = j;
                    return res;
                }
            }
            
        }
    }
    return 0;
}

//
//  LeeCode.c
//  SortAlgorithm
//
//  Created by zhoufei on 2019/2/27.
//  Copyright © 2019年 周飞. All rights reserved.
//

#include "LeeCode.h"
#include <stdlib.h>

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


//链表两数求和
//* Definition for singly-linked list.
typedef struct ListNode {
  int val;
  struct ListNode *next;
}*pListNode,ListNode;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL) {
        return l2;
    }
    
    if (l2 == NULL) {
        return l1;
    }
    
    pListNode pn = (pListNode)malloc(sizeof(ListNode));
    pListNode header = pn;
    pListNode tail = header;

    int tmp = 0;

    pListNode pNode1 = l1;
    pListNode pNode2 = l2;

    while (pNode1 != NULL || pNode2 != NULL) {
        tail = pn;
        if (pNode1 == NULL) {
            pn->val = pNode2->val;
        } else if (pNode2 == NULL) {
            pn->val = pNode1->val;
        } else {
            int res = pNode1->val + pNode2->val;
            if (res > 9) {
                tmp = res/10 ;
                pn->val = res%10;
            } else {
                pn->val = res;
            }
        }
        pn = (pListNode)malloc(sizeof(ListNode));
        tail->next = pn;
        
        pNode1 = l1->next;
        pNode2 = l2->next;
    }
    
    free(pn);
    return header;
}

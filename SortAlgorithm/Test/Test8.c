//
//  Test8.c
//  SortAlgorithm
//
//  Created by zhoufei on 2019/1/15.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  一道分解数字 为十位与个位的乘积的面试题

#include "Test8.h"
#include <stdio.h>
#include <stdlib.h>

int resolveNum(int num) {
    int left = num/10;
    int reight = num%10;
    
    if (left > 0 && reight > 0) {
        int res = left * reight;
        resolveNum(res);
    }
    return num;
}


//选择排序
void selectSort2(int array2[], int length) {
    
    int index = 0;
    for (int i = 0; i < length; i++) {
        for (int j = length - 1; j > i; j--) {
            if (array2[j] < array2[j-1]) {
                index = j;
            }
            
            if (index > i) {
                int temp = array2[index];
                array2[index] = array2[i];
                array2[i] = temp;
            }
        }
    }
}

//将单向链表逆序

typedef struct Node {
    int data;
    struct Node *next;
}Node,*pNode;

pNode createLinkList(int length) {
    if (length <= 0) {
        return NULL;
    }
    
    Node *head, *tmp, *last;
    int num = 1;
    head = (pNode)malloc(sizeof(Node));
    head->data = 0;
    last = head;
    
    while (++num < length) {
        tmp = (pNode)malloc(sizeof(Node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        
        last = tmp;
    }
    
    return head;
}

void printLinkList(pNode head) {
    if (head == NULL) {
        return;
    }
    
    pNode tmp = head;
    while (tmp != NULL) {
        printf("%d",tmp->data);
        tmp = tmp->next;
    }
}

//图像表示，链表开始：head->p->q->1->3

void reversalList2(pNode pRoot) {
    if (pRoot == NULL) {
        return;
    }
    Node *head, *p, *q;
    head = pRoot;
    p = NULL;
    while (head->next != NULL) {
        p = head->next;
        q = p->next;
        
        p->next = q->next;
        q->next = head->next;
        head->next = q;
    }
    //创建循环
    q->next = head;
    //断开循环
    head->next = NULL;
    
}

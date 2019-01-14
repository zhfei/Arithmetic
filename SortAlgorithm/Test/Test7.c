//
//  Test7.c
//  SortAlgorithm
//
//  Created by zhoufei on 2019/1/14.
//  Copyright © 2019年 周飞. All rights reserved.
//
//  反转二叉树

#include "Test7.h"
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *left;
    struct Node *reight;
}Node,*pNode;

void reversalTree(pNode tree) {
    if (tree == NULL) {
        return;
    }
    
    if (tree->left == NULL) {
        return;
    }
    if (tree->reight == NULL) {
        return;
    }
    
    pNode left = tree->left;
    pNode reight = tree->reight;
    tree->left = reight;
    tree->reight = left;
    
    reversalTree(tree->left);
    reversalTree(tree->reight);
}

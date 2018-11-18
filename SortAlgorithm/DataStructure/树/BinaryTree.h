//
//  BinaryTree.h
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/18.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  二叉树的遍历算法

#ifndef BinaryTree_h
#define BinaryTree_h

typedef int BTElemteType;
typedef int State;
typedef struct BTNode {
    BTElemteType data;
    struct BTNode *lchild;
    struct BTNode *rchild;
}BTNode, *pBTNode;

#include <stdio.h>

//先序遍历（先从根节点开头打印）
State preOrderTraverse(BTNode *T);
//中序遍历递归算法
State inOrderTraverse(BTNode *T);

#endif /* BinaryTree_h */

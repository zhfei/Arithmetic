//
//  BinaryTree.c
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/18.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "BinaryTree.h"
#include <stdlib.h>

//先序遍历（先从根节点开头打印）
State preOrderTraverse(BTNode *T) {
    if (T == NULL) {
        return -1;
    }
    //1.打印节点数据
    printf("%d",T->data);
    //2.打印先序遍历左子树
    preOrderTraverse(T->lchild);
    //3.打印先序遍历右子树
    preOrderTraverse(T->rchild);
    return 1;
}

//中序遍历递归算法
State inOrderTraverse(BTNode *T) {
    if (T == NULL) {
        return 1;
    }
    //中序遍历左子树
    inOrderTraverse(T->lchild);
    //节点数据打印
    printf("%c",T->data);
    //中序遍历右子树
    inOrderTraverse(T->rchild);
    return 1;
}

//后序遍历递归算法
State postOrderTraverse(BTNode *T) {
    if (T == NULL) {
        return -1;
    }
    postOrderTraverse(T->lchild);
    postOrderTraverse(T->rchild);
    printf("%c",T->data);
    return 1;
}

//
//  SortBinTree.c
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/24.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "SortBinTree.h"
#include <stdlib.h>

#define Status int
#define TRUE 1
#define FALSE_ 0

typedef struct BinTNode {
    int data;
    struct BinTNode *lchild, *rchild;
}BinTNode, *BinTree;

//查找顺序二叉树中是否存在数据key

/* 递归查找二叉排序树T中是否存在key, */
/* 指针f指向T的双亲，其初始调用值为NULL */
/* 若查找成功，则指针p指向该数据元素结点，并
 返回TRUE */
/* 否则指针p指向查找路径上访问的最后一个结点
 并返回FALSE */
Status SearchBST(BinTree T, int key, BinTree f, BinTree *p) {
    if (!T) {
        *p = f;
        return FALSE_;
    } else if (T->data == key) {
        *p = T;
        return TRUE;
    } else if (key > T->data) {
        SearchBST(T->rchild, key, T, p);
    } else if (key < T->data) {
        SearchBST(T->lchild, key, T, p);
    }
    return FALSE_;
}


/* 当二叉排序树T中不存在关键字等于key的数据元
 素时， */
/* 插入key并返回TRUE，否则返回FALSE */
Status InsertBST(BinTree *T, int key) {
    BinTree s;//插入的节点对象
    BinTree p;//查询节点key结果
    if (!SearchBST(*T, key, NULL, &p)) {
        BinTree bp = (BinTree)malloc(sizeof(BinTNode));
        if (!p) {
            *T = bp;
        } else if (key < p->data) {
            p->lchild = bp;
        } else {
            p->rchild = bp;
        }
        return TRUE;
    }
    return FALSE_;
}

//
//  Tree.c
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/17.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  顺序存储结构

#include "Tree.h"

#define Max_Tree_Size 10
typedef int TEleType;

//  1.双亲(父节点)存储结构表示法
//typedef struct TNode {
//    TEleType data;
//    int parent;//顺序存储结构，表示父节点下标
//}TNode, *pTNode;
//
//typedef struct TNode1 {
//    TEleType data;
//    int parent;//顺序存储结构，表示父节点下标
//    int firstChild;//节点下的左孩子（长子）
//    int rightsib;//节点的右兄弟（兄弟）
//}TNode1, *pTNode1;
//
//typedef struct PTree {
//    TNode data[Max_Tree_Size];
//    int root;//父节点下标
//    int count;//节点个数
//}PTree, *pPTree;

//  2.孩子存储结构表示法(根节点，子根节点顺序存储结构，孩子节点用链式存储结构)
typedef struct CTNode {//孩子节点元素结构
    TEleType data;
    int next;//节点下的左孩子（长子）
}CTNode, *pCTNode;

typedef struct CTBox {//数组内元素结构
    TEleType data;
    int firstChild;//节点下的左孩子（长子）
}CBox, *pCBox;

typedef struct PTree {
    CTNode data[Max_Tree_Size];
    int root;//父节点下标
    int count;//节点个数
}PTree, *pPTree;



//  3.兄弟存储结构表示法

//
//  BinThreadTree.c
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/21.
//  Copyright © 2018年 周飞. All rights reserved.
//

#include "BinThreadTree.h"

#define Max_Tree_Size 10
typedef int BTElemType;

typedef enum {
    Link = 0,//链表，表示指向左右孩子
    Thread //线索，指向前驱后继的线索
} PointerTag;

typedef struct BinThreadNode {
    BTElemType data;
    struct BinThreadNode *lchild, *rchild;//左右孩子指针
    PointerTag RTage, LTag;//左右指针标示
}BinThreadNode, *pBinThreadNode;

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


pBinThreadNode pre; //全局变量，指向刚刚访问过的节点
//中序遍历，使用中序线索化
void InThreading(pBinThreadNode p) {
    
    if (p) {
        InThreading(p->lchild);
        //设置前驱
        if (!p->lchild) {
            p->LTag = Thread;
            p->lchild = pre;
        }
        //设置后继
        if (!pre->rchild) {
            pre->RTage = Thread;
            pre->rchild = p;
        }
        
        pre = p;
        InThreading(p->rchild);
    }
}

//
//  Tree.h
//  SortAlgorithm
//
//  Created by 周飞 on 2018/11/17.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  将树这种一对多的逻辑结构存储到线性结构的方法有三种
//  1.双亲(父节点)存储结构
//  2.孩子存储结构
//  3.兄弟存储结构

#ifndef Tree_h
#define Tree_h

#include <stdio.h>

/*
 ADT
 有一个根节点和若干个子树构成，树中的节点具有相同的数据结构和层次关系
 
 Operation
 InitTree(*T):               构造空树T。
 DestroyTree(*T):            销毁树T。
 CreateTree(*T, definition): 按definition中给出树的定义来构造树。
 ClearTree(*T):              若树T存在，则将树T清为空树。
 TreeEmpty(T):               若T为空树，返回true，否则返回false。
 TreeDepth(T):               返回T的深度。
 Root(T):                    返回T的根结点。
 Value(T, cur_e):            cur_e是树T中一个结点，返回此结点的值。
 Assign(T, cur_e, value):    给树T的结点cur_e赋值为value。
 Parent(T, cur_e):           若cur_e是树T的非根结点，则返回它的双亲，否则返回空。
 LeftChild(T, cur_e):        若cur_e是树T的非叶结点，则返回它的最左孩子，否则返回空。
 RightSibling(T, cur_e):     若cur_e有右兄弟，则返回它的右兄弟，否则返回空。
 InsertChild(*T, *p, i, c):  其中p指向树T的某个结点，i为所指结点p的度加上1，
 非空树c与T不相交，操作结果为插入c为树T中p指结点的第i棵子树。
 DeleteChild(*T, *p, i):     其中p指向树T的某个结点，i为所指结点p的度，操作结果为删除T中p所指结点的第i棵子树。
 endADT
 
 */

#endif /* Tree_h */

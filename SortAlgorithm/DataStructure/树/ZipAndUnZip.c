//
//  ZipAndUnZip.c
//  SortAlgorithm
//
//  Created by zhoufei on 2018/11/22.
//  Copyright © 2018年 周飞. All rights reserved.
//
//  美国有个数学家叫赫夫曼，60年前他根据数据的使用概率，发明了一个二叉树叫赫夫曼树，
//  这个赫夫曼树被用在了数据压缩上，被称为赫夫曼编码，这是后来压缩的基础
//  他解决的问题是：
//  学生考试成绩出来后，会根据考试成绩分等级，极优秀，优秀，及格，不及格。如果我们按照普通逻辑进行判断时，通常是
//if (Score > 90) {
//    printf("极优秀");
//} else if (Score > 80) {
//    printf("优秀");
//} else if (Score > 60) {
//    printf("及格");
//} else if (Score > 0) {
//    printf("不及格");
//} else {
//    printf("...");
//}
//
//  但是按照分数的分布概率，优秀：30%，及格：40%，极优秀：15%，及格：15%
//  如果先判断优秀，及格，再判断极优秀，及格，则可以提高很多效率
//  赫夫曼树就是根据概率来生成二叉树，进行判断

#include "ZipAndUnZip.h"

#define Score 60

void pan() {
    if (Score > 90) {
        printf("极优秀");
    } else if (Score > 80) {
        printf("极优秀");
    } else if (Score > 60) {
        printf("及格");
    } else if (Score > 0) {
        printf("不及格");
    } else {
        printf("...");
    }
}

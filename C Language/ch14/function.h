//
// Created by Seven on 2024/3/4.
//

#ifndef WANGDAO_FUNCTION_H
#define WANGDAO_FUNCTION_H

#include <cstdio>
#include <cstdlib>

#define MaxSize 50

typedef char ElemType;

typedef struct TreeNode{
    ElemType key;
    TreeNode *lChild, *rChild;
}TreeNode, *BinTree;

typedef struct QueueNode{
    ElemType data[MaxSize];
    BinTree node[MaxSize];
    int len, insP;
}QueueNode, *Queue;


#endif //WANGDAO_FUNCTION_H

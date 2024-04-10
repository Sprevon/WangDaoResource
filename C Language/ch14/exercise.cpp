//
// Created by Seven on 2024/3/2.
//
#include "function.h"

void InitQueue(QueueNode &queueNode) {
    queueNode.len = 0;
    queueNode.insP = 0;
    ElemType input;
    scanf("%c", &input);
    while (input != '\n') {
        queueNode.data[queueNode.len++] = input;//后向指针，最后会停在空值
        scanf("%c", &input);
    }
}

void InsertTree(BinTree &binTree, QueueNode queueNode) {
    int nodeP = 0;
    //如果当前节点为空
    if (binTree == nullptr) {
        binTree = (BinTree) calloc(1, sizeof(TreeNode));
        binTree->key = queueNode.data[queueNode.insP];//存入下一个字符
        queueNode.node[queueNode.insP++] = binTree;//记录当前节点
    }

    BinTree workTree = binTree;
    while (workTree && (queueNode.insP < queueNode.len)) {
        if (workTree->lChild == nullptr) {
            auto child = (BinTree) calloc(1, sizeof(TreeNode));
            child->key = queueNode.data[queueNode.insP];//存入下一个字符
            queueNode.node[queueNode.insP++] = child;
            workTree->lChild = child;
        } else if (workTree->rChild == nullptr) {
            auto child = (BinTree) calloc(1, sizeof(TreeNode));
            child->key = queueNode.data[queueNode.insP];//存入下一个字符
            queueNode.node[queueNode.insP++] = child;
            workTree->rChild = child;
        } else {
            workTree = queueNode.node[++nodeP];
        }
    }
}

void printTree(BinTree binTree) {
    if (binTree == nullptr) {
        return;
    }
    printf("%c", binTree->key);
    printTree(binTree->lChild);
    printTree(binTree->rChild);
}

void InOrder(BinTree binTree) {
    if (binTree == nullptr) {
        return;
    }
    InOrder(binTree->lChild);
    printf("%c", binTree->key);
    InOrder(binTree->rChild);
}

void PostOrder(BinTree binTree) {
    if (binTree == nullptr) {
        return;
    }
    PostOrder(binTree->lChild);
    PostOrder(binTree->rChild);
    printf("%c", binTree->key);
}

void LevelOrder(BinTree binTree) {
    QueueNode pq;
    pq.len = 0;
    int nodeP = 0;

    putchar(binTree->key);

    while (binTree && (nodeP <= pq.len)) {
        if (binTree->lChild != nullptr) {
            putchar(binTree->lChild->key);
            pq.node[pq.len++] = binTree->lChild;
        }
        if (binTree->rChild != nullptr) {
            putchar(binTree->rChild->key);
            pq.node[pq.len++] = binTree->rChild;
        }
        binTree = pq.node[nodeP++];
    }
}

int main() {
    QueueNode queueNode;
    InitQueue(queueNode);
    BinTree binTree = nullptr;
    InsertTree(binTree, queueNode);
//    printTree(binTree);
    InOrder(binTree);
    printf("\n");
    PostOrder(binTree);
    printf("\n");
    LevelOrder(binTree);
}
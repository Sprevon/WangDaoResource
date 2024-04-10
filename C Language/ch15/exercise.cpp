//
// Created by Seven on 2024/3/3.
//
#include <cstdio>
#include <cstdlib>

#define MaxLen 10

typedef int ElemType;
typedef struct TreeNode {
    ElemType key;
    TreeNode *lChild, *rChild;
} TreeNode, *BinTree;


void EnTree(BinTree &binTree, ElemType data) {
    if (binTree == nullptr) {
        binTree = (BinTree) calloc(1, sizeof(TreeNode));
        binTree->key = data;
    } else {
        if (data <= binTree->key) {
            EnTree(binTree->lChild, data);
        } else {
            EnTree(binTree->rChild, data);
        }
    }
}

void PrintTree(BinTree binTree, ElemType *list, int &index) {
    if (binTree == nullptr) {
        return;
    }
    PrintTree(binTree->lChild, list, index);
    printf("%3d", binTree->key);
    list[index++] = binTree->key;
    PrintTree(binTree->rChild, list, index);
}

int BinSearch(const ElemType *list, ElemType data) {
    int front = MaxLen - 1; //转换为函数下标
    int rear = 0;
    int mid;
    while (rear <= front){
        mid = (front + rear) / 2;
        if(data < list[mid]){
            front = mid - 1; //多移一位
        } else if(data > list[mid]){
            rear = mid + 1;
        } else{
            return mid;
        }
    }
    return -1;
}

void InitTree(BinTree &binTree){
    ElemType input;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        EnTree(binTree, input);
    }
}

int main(){
    BinTree binTree = nullptr; //需要初始化
    InitTree(binTree);
    ElemType list[50];
    int colIndex = 0;
    PrintTree(binTree, list, colIndex);
    printf("\n");
    printf("%d", BinSearch(list, 21));
}






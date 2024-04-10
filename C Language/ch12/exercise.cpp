//
// Created by Seven on 2024/3/1.
//
#include <stdio.h>
#include <stdlib.h>

#define getPos 2
#define insPos 2
#define insData 99
#define delPos 4

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    LNode *next;
} LNode, *LinkList;

void PrintList(LinkList L) {
    L = L->next;
    while (L != nullptr) {
        printf("%3d", L->data);//打印当前结点数据
        L = L->next;//指向下一个结点
    }
    printf("\n");
}

void InsertLinkList(LinkList &L) {
    L = (LinkList) malloc(sizeof(LNode));
    LinkList p, t = L;
    ElemType input;
    scanf("%d", &input);
    while (input != 9999) {
        p = (LinkList) malloc(sizeof(LNode));
        p->data = input;
        p->next = nullptr;
        t->next = p;
        scanf("%d", &input);
        t = p;
    }
}

LinkList GetElem(LinkList &L, int pos){
    LinkList p = L->next; //节点遍历工具
    int j = 1;
    if(pos == 0)
        return L;
    if(pos < 0){
        return nullptr;
    }
    while(p&&j < pos){
        p = p->next;
        j++;
    }
    return p;
}

void PosInsert(LinkList &L, int pos, ElemType data){
    LinkList posElem = GetElem(L, pos - 1);
    auto insElem = (LinkList) malloc(sizeof (LNode));
    insElem->next = posElem->next;
    insElem->data = data;
    posElem->next = insElem;
    PrintList(L);
}

void PosDelete(LinkList &L, int pos){
    LinkList posElem1 = GetElem(L, pos - 1);
    LinkList posElem2 = GetElem(L, pos);
    LinkList posElem3 = GetElem(L, pos + 1);
    posElem1->next = posElem3;
    free(posElem2);
    PrintList(L);
}



int main(){
    LinkList L;
    InsertLinkList(L);
    printf("%d\n", GetElem(L, getPos)->data);
    PosInsert(L, insPos, insData);
    PosDelete(L, delPos);
}


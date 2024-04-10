//
// Created by Seven on 2024/3/1.
//
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode* next;
}LNode, *LinkList;

void PrintList(LinkList L){
    L = L->next;
    while(L != nullptr){
        printf("%d", L->data);
        L = L->next;
        if(L != nullptr){
            printf(" ");
        }
    }
    printf("\n");
}

void list_head_insert(LinkList &L){
    L->next = nullptr;
    ElemType input;
    scanf("%d", &input);
    LinkList p;
    while (input != 9999){
        p = (LinkList) malloc(sizeof (LNode));
        p->data = input;
        p->next = L->next;
        L->next = p;
        scanf("%d", &input);
    }
    PrintList(L);
}

void list_tail_insert(LinkList &L){
    L->next = nullptr; //用next = null来停止
    ElemType input;
    scanf("%d", &input);
    LinkList p, tail = L; //尾节点从L开始
    while (input != 9999){
        p = (LinkList) malloc(sizeof (LNode)); //malloc得到的数据不会是null，需要人工定义
        p->data = input;
        p->next = nullptr;
        tail->next = p;
        tail = p; //尾节点后移
        scanf("%d", &input);
    }
    PrintList(L);
}

LinkList GetElem(LinkList &L, int pos){
    int j = 1;
    LinkList p = L->next;
    if(pos == 0){
        return L;
    }
    if(pos < 0){
        return nullptr;
    }
    while (p&&j < pos){
        p = p->next;
        j ++;
    }
    return p;
}

bool ListFrontInsert(LinkList &L, int pos, ElemType data){
    LinkList insPos = GetElem(L, pos);
    if(insPos != nullptr){
        return false;
    }else{
        auto p = (LinkList) malloc(sizeof (LNode));
        p->data = data;
        p->next = insPos->next;
        insPos->next = p;
        return true;
    }
}


int main(){
    auto L1 = (LinkList) malloc(sizeof (LNode));
    auto L2 = (LinkList) malloc(sizeof (LNode));
    list_head_insert(L1);
    list_tail_insert(L2);
}
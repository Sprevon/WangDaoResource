//
// Created by Seven on 2024/7/26.
//
#include <cstdlib>
#include <cstdio>

#define max 20

typedef int ElemType;
typedef int index;
typedef struct stackBasic {
    ElemType data[max];
    index top;
} StackBasic;

ElemType popStackBasic(StackBasic s) {
    if (s.top == -1) {
        return -1;
    } else {
        return s.data[s.top--]; //要返回数据再减下标
    }
}

void pushStackBasic(StackBasic s, ElemType data) {
    if (s.top + 1 >= max) {
        return;
    } else {
        s.data[++s.top] = data; //先要指针加一，从初始化的-1变为0
    }
}

bool isEmptyStackBasic(StackBasic s) {
    if (s.top == -1) {
        return true;
    } else {
        return false;
    }
}

bool isFullStackBasic(StackBasic s) {
    if (s.top + 1 >= max) {
        return true;
    } else {
        return false;
    }
}

/**
* 单链表栈实现
*/
typedef struct linkNode {
    ElemType data;
    struct linkNode *next;
} LinkNode;

typedef struct stackLink {
    LinkNode *head;
} StackLink;

bool pushStackLink(StackLink *s, ElemType data) {  //应该传递StackLink*而不是StackLink本身否则将传递副本
    LinkNode *node = (LinkNode *) malloc(sizeof(LinkNode));
    if (node == nullptr)
        return false;
    node->data = data;
    node->next = s->head->next;
    s->head->next = node;
    return true;
}

bool popStackLink(StackLink *s) {
    LinkNode *node = s->head->next;
    if (node == nullptr)
        return false;
    s->head->next = s->head->next->next;
    free(node);        //应该记得释放内存
    return true;
}

bool isEmptyStackLink(StackLink *s) {
    if (s->head->next == nullptr)
        return true;
    else
        return false;
}

bool isFullStackLink(StackLink *s) {
    LinkNode *node = (LinkNode *) malloc(sizeof(LinkNode));
    if (node == nullptr)
        return true;
    else
        return false;
}


/**
 * 双链表实现
 */
typedef struct doubleNode {
    ElemType data;
    struct doubleNode *before;
    struct doubleNode *next;
} DoubleNode;

typedef struct stackDoubleNode {
    DoubleNode *rear;
} StackDoubleNode;

StackDoubleNode *initStackDoubleNode() {
    StackDoubleNode *s = (StackDoubleNode *) malloc(sizeof(StackDoubleNode));
    s->rear = nullptr;
    return s;
}

bool pushStackDoubleNode(StackDoubleNode *s, ElemType data) {
    DoubleNode *node = (DoubleNode *) malloc(sizeof(DoubleNode));
    if (node == nullptr)
        return false;
    node->data = data;
    node->next = nullptr;
    node->before = s->rear;
    s->rear = node;
    return true;
}

bool popStackDoubleNode(StackDoubleNode *s) {
    DoubleNode *node = s->rear;
    if (node == nullptr)
        return false;
//    node->before->next = node->next;  如果访问的时候node->before是空指针则会报错。故应该先判断
    if (node->before->next != nullptr)
        node->before->next = node->next;
    s->rear = node->before;
    free(node);
    return true;
}



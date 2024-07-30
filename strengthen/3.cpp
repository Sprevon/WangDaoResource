//
// Created by Seven on 2024/7/26.
//

#include <cstdlib>
#include <iostream>

#define MAXSIZE 10

typedef int ElemType;

typedef struct tree {
    ElemType data[MAXSIZE];
} Tree;

Tree *createBy1() {
    Tree *t = (Tree *) malloc(sizeof(Tree));
    for (int & i : t->data){
        i = 0;
    }
    t->data[1] = 1;
    t->data[2] = 2;
    t->data[3] = 3;
    t->data[4] = 4;
    t->data[5] = 5;
    t->data[6] = 6;
    t->data[7] = 7;
    t->data[8] = 8;
    return t;
}

int findFather1(int i, Tree t) {
    return i / 2;
}

int leftChild1(int i, Tree t) {
    return 2 * i;
}

int rightChild1(int i, Tree t) {
    return 2 * i + 1;
}

void preOrder1(int i, Tree t){
    std::cout << t.data[i];
    int lc = leftChild1(i, t);
//    while(lc < MAXSIZE && t.data[lc] != 0) 递归本身就会产生多次调用，且这里的递归调用不会修改判断的值。这里如果用while的话就会造成自循环而无法退出
    if (lc < MAXSIZE && t.data[lc] != 0)
        preOrder1(lc, t);
    int rc = rightChild1(i, t);
//    while (rc < MAXSIZE && t.data[rc] != 0)
    if (rc < MAXSIZE && t.data[rc] != 0)
        preOrder1(rc, t);
}

void inOrder1(int i, Tree t){
    int lc = leftChild1(i, t);
    if (lc < MAXSIZE && t.data[lc] != 0)
        inOrder1(lc, t);
    std::cout << t.data[i];
    int rc = rightChild1(i, t);
    if(rc < MAXSIZE && t.data[rc] != 0)
        inOrder1(rc, t);
}

void postOrder1(int i, Tree t){
    int lc = leftChild1(i, t);
    if (lc < MAXSIZE && t.data[lc] != 0)
        postOrder1(lc, t);
    int rc = rightChild1(i, t);
    if(rc < MAXSIZE && t.data[rc] != 0)
        postOrder1(rc, t);
    std::cout << t.data[i];
}






int main(){
    Tree tree = *createBy1();
    std::cout << "PreOrder1: ";
    preOrder1(1, tree);
    std::cout << std::endl;
    std::cout << "inOrder1: ";
    inOrder1(1, tree);
    std::cout << std::endl;
    std::cout << "PostOrder1: ";
    postOrder1(1, tree);
}


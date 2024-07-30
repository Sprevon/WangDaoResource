//
// Created by Seven on 2024/7/26.
//

#include <iostream>

#define MAX 100
typedef int ElemType;

/**
 * 双亲表示法
 */
typedef struct {
    ElemType data;
    int parent;
} PTNode;

typedef struct {
    PTNode nodes[MAX];
    int n;
} PTree;


/**
 * 孩子表示法
 */
typedef struct cTPointer {
    struct cTPointer *next;
    int index;
} CTPointer;

typedef struct {
    ElemType data;
    CTPointer *child;
} CTNode;

typedef struct {
    CTNode nodes[MAX];
    int n;
} CTree;


/**
* 孩子兄弟表示法
*/
typedef struct CSNode{
    ElemType data;
    struct CSNode *firstChild, *nextSibling;
}CSNode, *CSTree;





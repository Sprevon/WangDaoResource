//
// Created by Seven on 2024/7/29.
//
#define MAX 100

typedef struct {
    int edge[MAX][MAX];
} SerMap;

typedef int VType;

typedef struct linkNode {
    int edgeSize;
    VType node;
    struct linkNode *next;
} LinkNode;

//typedef struct {
//    VType vert[MAX];
//    LinkNode *next;   应该是边和节点的链表
//} LinkMap;

typedef struct {
    VType vert;
    LinkNode *next;
} LinkMapNode, LinkNodes[MAX];

typedef struct {
    LinkNodes nodes;
}LinkMap;


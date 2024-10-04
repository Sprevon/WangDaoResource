//
// Created by Seven on 2024/7/31.
//

#include <cstdlib>
#include <iostream>
#include <queue>

#define MAX 10

typedef struct node {
    int weight;
    struct node *left;
    struct node *right;
} Node;

typedef struct Queue {
    Node *nodes[MAX];
    int front, rear;
} Queue, *QueueNode;

bool isEmpty(QueueNode s) {
    return s->front == s->rear;
}

bool isFull(QueueNode s) {
    return (s->rear + 1) % MAX == s->front;
}

void push(QueueNode &s, Node *node) {
    if (!isFull(s)) {
        s->nodes[s->rear] = node;
        s->rear = (s->rear + 1) % MAX;
    }
}

Node *pop(QueueNode &s) {
    if (!isEmpty(s)) {
        Node *node = s->nodes[s->front];
        s->front = (s->front + 1) % MAX;
        return node;
    }
    return nullptr;
}

QueueNode init() {
    QueueNode s = (QueueNode) malloc(sizeof(Queue));
    s->rear = s->front = 0;
    return s;
}

int calculate(Node *root) {
    QueueNode s = init();
    push(s, root);
    int count = 0;
    while (!isEmpty(s)) {
        Node *tmp = pop(s);
        if (tmp->left != nullptr) {
            tmp->left->weight += tmp->weight;
            push(s, tmp->left);
        }
        if (tmp->right != nullptr) {
            tmp->right->weight += tmp->weight;
            push(s, tmp->right);
        }
        if (tmp->right == nullptr && tmp->left == nullptr) {
            count += tmp->weight;
        }
    }
    return count;
}

int calculate2(Node *root){
    std::queue<Node *> queue;
    queue.push(root);
    int count = 0;
    while (!queue.empty()){
        Node *tmp = queue.front();
        queue.pop();
        if (tmp->left != nullptr) {
            tmp->left->weight += tmp->weight;
            queue.push(tmp->left);
        }
        if (tmp->right != nullptr) {
            tmp->right->weight += tmp->weight;
            queue.push(tmp->right);
        }
        if (tmp->right == nullptr && tmp->left == nullptr) {
            count += tmp->weight;
        }
    }
    return count;
}

int main() {
    Node *node = (Node *) malloc(sizeof(Node));
    node->weight = 1;
    node->left = (Node *) malloc(sizeof(Node));
    node->left->weight = 2;
    node->left->left = nullptr;
    node->left->right = nullptr;

    node->right = (Node *) malloc(sizeof(Node));
    node->right->weight = 3;
    node->right->left = nullptr;
    node->right->right = nullptr;

    std::cout << "My Solution " <<calculate(node) << std::endl;

    node = (Node *) malloc(sizeof(Node));
    node->weight = 1;
    node->left = (Node *) malloc(sizeof(Node));
    node->left->weight = 2;
    node->left->left = nullptr;
    node->left->right = nullptr;

    node->right = (Node *) malloc(sizeof(Node));
    node->right->weight = 3;
    node->right->left = nullptr;
    node->right->right = nullptr;
    std::cout << "Standard Solution " <<calculate2(node);
}

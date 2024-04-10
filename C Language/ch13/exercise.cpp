//
// Created by Seven on 2024/3/2.
//
#include <cstdio>
#include <cstdlib>

#define MaxSize 5

typedef int ElemType;
typedef struct Stack{
    ElemType data[MaxSize];
    int top;
}Stack;

typedef struct Queue{
    ElemType data[MaxSize];
    int front, rear;
}Queue;

//为什么数组实现不需要使用二级指针或者引用指针？
//  因为数组操作不涉及指针变量的修改


void InitStack(Stack &stack){
    stack.top = -1;
}

void PrintStack(Stack stack){
    while(stack.top != -1){
        printf("%2d", stack.data[stack.top--]);
    }
    printf("\n");
}

void EnStack(Stack &stack){
    ElemType input;
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &input);
        stack.data[++stack.top] = input;
    }
}

void InitQueue(Queue &queue){
    queue.front = queue.rear = 0;
}

void PrintQueue(Queue queue){
    while (queue.front < queue.rear){
        printf("%2d", queue.data[queue.front++]);
    }
    printf("\n");
}

void EnQueue(Queue &queue){
    ElemType input;
    scanf("%d", &input);
    while (input){
        if((queue.rear + 1) % MaxSize == queue.front){
            printf("false\n");
            return;
        }
        queue.data[queue.rear++] = input;
        scanf("%d", &input);
    }
}

int main(){
    Stack stack;
    Queue  queue;
    InitStack(stack);
    EnStack(stack);
    PrintStack(stack);

    InitQueue(queue);
    EnQueue(queue);
    PrintQueue(queue);
}



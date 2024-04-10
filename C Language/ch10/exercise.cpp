//
// Created by Seven on 2024/2/28.
//
#include <stdio.h>

#define MaxSize 50
typedef int ElemType;

typedef struct
{
    ElemType list[MaxSize];
    int len;
}SqList;

bool insertElem(SqList &L, int pos, ElemType data)
{
    if(pos < 1 || pos > L.len + 1)
    {
        return false;
    }
    for(int i = L.len; i >= pos; i--)
    {
        L.list[i] = L.list[i - 1];
    }
    L.list[pos - 1] = data;
    L.len++;
    for(int i = 0; i < L.len; i++)
    {
        printf("%3d", L.list[i]);
    }
    printf("\n");
    return true;
}

bool deleteElem(SqList &L, int pos)
{
    if(pos < 1 || pos > L.len + 1)
    {
        printf("false");
        return false;
    }
    for(int i = pos - 1; i < L.len - 1; i++)
    {
        L.list[i] = L.list[i + 1];
    }
    L.len--;

    for(int i = 0; i < L.len; i++)
    {
        printf("%3d", L.list[i]);
    }
    printf("\n");
    return true;
}

int main()
{
    SqList list;
    list.len = 3;
    list.list[0] = 1;
    list.list[1] = 2;
    list.list[2] = 3;
    int p1;
    scanf("%d", &p1);
    insertElem(list, 2, p1);
    int p2;
    scanf("%d", &p2);
    deleteElem(list, p2);
}
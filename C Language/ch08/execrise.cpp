//
// Created by Seven on 2024/2/26.
//
#include <cstdio>

typedef struct students{
    int id;
    char name[100];
    char sex;
}Student;

int main(){
    Student s;
    scanf("%d %s %c", &s.id, &s.name, &s.sex);
    printf("%d %s %c", s.id, s.name, s.sex);
}

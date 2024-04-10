//
// Created by Seven on 2024/2/12.
//
//C++引用， 可以避免二级指针
#include <stdio.h>

void modify_num(int &b){
    b++;
}


int main(){
    int a = 10;
    modify_num(a);
    printf("%d\n", a);
    return 0;
}
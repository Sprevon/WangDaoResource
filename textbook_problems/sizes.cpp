//
// Created by Seven on 2024/6/9.
//
#include <iostream>

using namespace std;

struct node {
    char id[9];
    char name[16];
    int post;
    char phone[21];
    float fl[2];
};

int main(){
    node n = {"aa", "bb", 10, "cc", {1, 2.2}};
    for (int i = 0; i < 10; i ++){
        if (i < 9)
            i++;
        cout << i;
    }
    int i[10] = {1,2,3, 4, 5, 6, 7, 8, 9, 10};
    int j;
    j = i[8];

    return 0;
}

//gcc -S -masm=intel -fverbose-asm sizes.cpp -o sizes.s
//
// Created by Seven on 2024/2/26.
//
#include <cstdio>
#include <cstdlib>

void readLetter(char* &p){
    p = (char *) malloc(100);
    fgets(p, 100, stdin);
}

int main(){
    char *p;
    readLetter(p);
    puts(p);
}
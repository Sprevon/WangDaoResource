//
// Created by Seven on 2024/2/10.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char *inputChar;
    char reduChar;

    scanf("%d", &size);
    inputChar = (char *)malloc(size);
    scanf("%c", &reduChar);
    fgets(inputChar, size, stdin);
    puts(inputChar);


    return 0;
}
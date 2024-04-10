//
// Created by Seven on 2024/1/29.
//
#include<stdio.h>
#include<string.h>//注意名字需要小写

int main()
{
    char c[200];
    char d[200];
    gets(c);
    int dIndex = 0;
    for(int i = strlen(c) - 1; i >= 0 ; i--)
    {
        d[dIndex] = c[i];
        dIndex++;
    }
    int result = strcmp(c, d);
    if(result > 0)
    {
        printf("%d\n",1);
    }
    else if(result == 0)
    {
        printf("%d\n",0);
    }
    else
    {
        printf("%d\n",-1);
    }
    return 0;
}

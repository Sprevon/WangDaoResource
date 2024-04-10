//
// Created by Seven on 2024/1/29.
//
#include<stdio.h>
#include<String.h>

void appint(int pInt[10], int i);

int main(){
    int arr[10] = {0};
    int j = 10;
    int i = 11;
    arr[11] = 22;
    arr[12] = 33;
    printf("%d\n", i);//下标越界
    printf("%d\n", j);
    appint(arr, 10);

    printf("=================================\n");

    char c[10] = "hello";
    printf("%s\n", c);
    char d[5] = "hello";//刚好等长会产生乱码
    printf("%s\n", d);
//    char e[10];
//    scanf("%s", e);//字符数组可不取地址，且会自动在字符数组中存放结束符
//    printf("%s\n", e);

    printf("=================================\n");

    int len;
    char g[20];
    char h[100] = "hello";
    gets(g);//可读取空格
    puts(g);
    len = strlen(g);
    printf("len=%d\n", len);
    strcat(g, h);//字符串拼接
    puts(g);
    char e[100];
    strcpy(e, g);//字符串拷贝
    printf("e ? %s = %d", "how", strcmp(e, "how"));//字符串比较
    return 0;
}

void appint(int a[10], int index){
    int len = sizeof(a) / sizeof(int);
    printf("%d\n", len);//数组在函数中传入指针
}
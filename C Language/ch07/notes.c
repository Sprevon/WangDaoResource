//
// Created by Seven on 2024/2/10.
//
#include <stdio.h>

int f(int n){
    if(n < 2){
        return 1;
    }
    return n * f(n - 1);
}

int step(int n)
{
    if(1 == n)
    {
        return 1;
    }
    if(2 == n)
    {
        return 2;
    }
    return step(n - 1) + step(n - 2);

}

int main(){
    printf("%d\n", f(3));

    int n;
    scanf("%d", &n);
    int type = step(n);
    printf("%d", type);



    return 0;
}
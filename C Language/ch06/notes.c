//
// 指针的使用场景： 1、指针传递，2、指针偏移
//
#include <stdio.h>
#include <stdlib.h>

void change(float j){ //普通数据类型在函数中为值传递，仅复制
    j = 10;
}

void changeLoc(int *k){//普通数据类型仅有在传入地址时才能在函数内修改
    *k = 10;
}

void changeArr(int a[]){//数组在函数中为地址传递，可以在函数中直接修改
    a[0] = 2;
}

void changeChar(char *c){ //传入指针，* 和 [] 都可访问
    *c = 'H';
    c[1] = 'E';
    *(c + 2) = 'L';
}


int main(){
    float i = 5;
    float *i_pointer = &i;//取地址
    printf("%f\n", i);
    printf("%f\n", *i_pointer);//间接访问
    int *a, *b, *c;

    printf("-------------------------------------------\n");

    change(i);
    printf("%f\n", i);

    int k = 5;
    changeLoc(&k);
    printf("%d\n", k);

    printf("-------------------------------------------\n");

    int j[10];
    j[0] = 1;
    changeArr(j);
    printf("%d\n", j[0]);

    printf("-------------------------------------------\n");

    int q[5] = {1, 2, 3, 4, 5};
    int *p;
    p = q;
    for (int l = 0; l < 5; l++) {
        printf("%3d", *(p + l));//指针变量 + int 1 的结果会在实际地址上 + 4。原因是会转化为+1个基量， 而int指针的1个基量为4
    }
    printf("\n");

    printf("-------------------------------------------\n");

    char word[10] = "hello";
    changeChar(word);
    puts(word);

    printf("-------------------------------------------\n");

    int size = 10;
    char *m;
    m = (char *)malloc(size); //malloc默认返回无类型指针，无类型指针无法偏移。强制转换指针类型后才能偏移
    m[0] = 'H';
    m[1] = 'O';
    m[2] = 'W'; //读取了多少位需要自己记清楚
    m[3] = '\n'; //数组最后一行需要特别注意
    puts(m);
    free(m);//malloc申请的空间需要释放。指针值不能有更改，不然会报错。

    return 0;
}





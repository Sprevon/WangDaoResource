//
// Created by Seven on 2024/2/12.
//
#include <stdio.h>

struct student{//结构体的的内存大小为最大成员的整数倍。对齐的目的是方便cpu存取数据
    int num;
    char sex;//非数组对齐时，内存可以拼接。例如，char 和 shot 会拼接成一个4字节
    char name[20];//数组变量本身就是指针，在正常调用时又可以显示值
};//声明后加分号

int main(){
    struct student s = {10, 'M', "Mike"};
    char name[20] = "Mike";
    scanf("%s", name); //字符串只用传递变量名
    struct student *p;
    p = &s;
    printf("%d\n", p->num);//.的优先级高于*取地址，因此需要用指针取属性 ->
    return 0;

}
#include <stdio.h>


#define PI 3 + 2 //符号常量在编译时直接放入
int main() {

    //变量介绍
    printf("==============1=============\n");
    int i = PI * 2;
    printf("i = %d\n", i);  //i = 7
    printf("i size = %llu\n", sizeof(i));
    char c = 'A';  //char[2] c = "A", 字符串末尾自带\0
    printf("%c\n", c + 32);
    printf("%d\n", c);


    //混合运算
    printf("==============2=============\n");
    int i_1 = 5;
    float f_1 = i_1/2;
    printf("%f\n", f_1); //2.00000，左除数和右除数都为整数，运算结果也为整型变量
    printf("%f\n", (float) i_1 / 2); //2.50000，左除数和右除数有一个微浮点数，运算结果变成浮点数·


    //格式化输出
    printf("==============3=============\n");
    int i_2 = 10;
    int i_2_1 = 100;
    printf("student number %3d\n", i_2);
    printf("student number %3d\n", i_2_1);


    //整型进制转换
    int i_3 = 0x7b;
    printf("==============3=============\n");
    printf("%d\n", i_3);
    printf("%o\n", i_3);
    printf("%x\n", i_3);


    /* scanf标准输入函数：
     * 如果没有数据缓冲区，则生产一个4096大小的数据缓冲区，检测到\n时，通过格式，%d、%f以空格为区分，读取第一个数据放入一个空间中，变量取地址
     * 如果已经存在数据缓冲区，则在数据缓冲区中读取第一个符号类型要求的数据，没有则重新阻塞进程
     */
    int i_4;
    int ret;
    char i_5;
    printf("please input: ");
    scanf("%d", &i_4);
    printf("the input is %d\n", i_4);
//    fflush(stdin);  // 在缓存框中还存在一个字符串类型的\n，只有fflush清除才不会自动取\n
    printf("please input: ");
//    scanf("%c", &i_5);  //由于%c格式可以读取转义字符和空格，如果不将缓冲区清除，则会造成阻塞失败
//    printf("the input is %c", i_5);
    ret = scanf("%d", &i_4);  // scanf读取数据放入一个空间中，变量取地址
    printf("the input is %d\n", i_4);
    printf("ret = %d", ret);

    return 0;
}

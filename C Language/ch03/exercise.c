//
// Created by Seven on 2024/1/25.
//
#include <stdio.h>

int main(){
//    int year;
//    scanf("%d", &year);
//    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
//        printf("yes");
//    } else{
//        printf("no");
//    }
//    return 0;

//    int i;
//    char j;
//    float k;
//    scanf("%d %c%f", &i, &j, &k);
//    float sum = (float)i + (float )j + k;
//    printf("%.2f", sum);

    int num;
    int numR = 0;
    int ex = 1;
    scanf("%d", &num);
    int bnum = num;
    while(num)
    {
        numR = numR * 10 + num % 10;
        ex *= 10;
        num = num/10;
    }

    if(bnum - numR == 0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

//    int val = 100;
//    int n = 40;
//    int methods = 0;
//    int t1 = 1; //10面值
//    int t2 = 1; //5面值
//    int t3 = 1; //2面值
//    int t4 = 1; //1面值
//
//    while(t1 < 11)
//    {
//        t2 = 1;
//        while(t2 < 21)
//        {
//            t3 = 1;
//            while(t3 < 51)
//            {
//                t4 = 1;
//                while(t4 < 101)
//                {
//                    if(t1 + t2 + t3 + t4 == n && 10*t1 + 5*t2 + 2*t3 + t4 == val)
//                    {
//                        methods ++;
//                    }
//                    t4++;
//                }
//                t3++;
//            }
//            t2++;
//        }
//        t1++;
//    }
//    printf("%d", methods);
//    return 0;

}
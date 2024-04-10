#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int ElemType;
typedef struct {
    ElemType *elem;//整型指针
    int TableLen;//存储动态数组里边元素的个数
} SSTable;

void ST_Init(SSTable &ST){
    ST.TableLen = 0;
    ElemType input;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        ST.elem[ST.TableLen++] = input;
    }
}

void ST_print(SSTable ST) {
    for (int i = 0; i < ST.TableLen; i++) {
        printf("%3d", ST.elem[i]);
    }
    printf("\n");
}

//实现二分查找
int BinarySearch(SSTable L, ElemType key) {
    int low = 0;
    int high = L.TableLen - 1;
    int mid;
    while (low <= high)//low<=high，可以让mid既能取到low，也能取到high
    {
        mid = (low + high) / 2;
        if (key > L.elem[mid])//如果目标值大于中位数
        {
            low = mid + 1;
        } else if (key < L.elem[mid]) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

//函数名中存储的是函数的入口地址，也是一个指针，是函数指针类型
//left指针和right指针是指向数组中的任意两个元素
//qsort规定如果left指针指向的值大于right指针指向的值，返回正值，小于，返回负值，相等返回0
int compare(const void *left, const void *right) {
    return *(int *) left - *(int *) right;
    //return *(ElemType*)right - *(ElemType*)left;//从大到小排序
}

//二分查找
int main() {
    SSTable ST;
    ST_Init(ST);
    qsort(ST.elem, ST.TableLen, sizeof(ElemType), compare);//排序
    ST_print(ST);
    ElemType key = 21;
    int pos = BinarySearch(ST, key);
    printf("%d\n", pos);
    return 0;
}

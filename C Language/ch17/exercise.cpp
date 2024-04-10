//
// Created by Seven on 2024/3/11.
//
#include <cstdlib>
#include <cstdio>

#define Len 10

typedef int ElemType;

void Init(ElemType *&arr){
    arr = (ElemType *) calloc(10, sizeof (ElemType));
    for(int i = 0; i < Len; i++){
        scanf("%d", &arr[i]);
    }
}

void PrintArr(ElemType *arr){
    for(int i = 0; i < Len; i ++){
        printf("%3d", arr[i]);
    }
    printf("\n");
}

void CpArr(const ElemType *orig, ElemType *&newer){
    newer = (ElemType *) calloc(10, sizeof(ElemType));
    for(int i = 0; i < Len; i ++){
        newer[i] = orig[i];
    }
}


//选择排序
void SelectSort(ElemType *arr){
    ElemType min, minIndex,i, j;
    for(i = 0; i < Len; i++){
        min = arr[i];
        minIndex = i; //需要初始化！！！！！！
        for(j = i + 1; j < Len; j++){
            if(arr[j] < min){
                min = arr[j];
                minIndex = j;
            }
        }
        arr[minIndex] = arr[i]; //起始数同最小数进行交换
        arr[i] = min;
    }
}


//堆排序
void Swap(ElemType *arr, int i, int j){
    ElemType tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void AdjustDown(ElemType *arr, int dad, int len){
    int son = dad * 2 + 1;//左孩子
    while(son < len){
        if((arr[son] < arr[son + 1]) && (son+1<len)){
            son++;
        }
        if(arr[son] > arr[dad]){
            Swap(arr, son, dad);
            dad = son;
            son = 2 * dad + 1;
        }else{
            break;
        }
    }
}

//为什么两次构建最大头堆的遍历方法不一样？第一次是建最大堆，第二次是最大值上移
void HeapSort(ElemType *arr){
    for(int i = Len/2 - 1; i >= 0; i--){ //从最后一个非叶节点开始
        AdjustDown(arr, i, Len);
    }
    Swap(arr, 0, Len - 1);
    for(int j = Len - 1; j > 1; j--){ //最大节点上移
        AdjustDown(arr, 0, j);
        Swap(arr, 0, j - 1);
    }
}


int main(){
    ElemType *arr, *arr1;
    //12 63 58 95 41 35 65  0 38 44
    Init(arr);
    CpArr(arr, arr1);

    SelectSort(arr);
    PrintArr(arr);

    HeapSort(arr1);
    PrintArr(arr1);
}




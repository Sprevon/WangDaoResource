//
// Created by Seven on 2024/3/7.
//
#include <cstdio>
#include <cstdlib>

#define MaxSize 10

typedef int ElemType;

void Init(ElemType *&arr){
    arr = (ElemType *) calloc(MaxSize, sizeof (ElemType));
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
}

void PrintArr(ElemType *arr){
    for(int i = 0; i < MaxSize; i++){
        printf("%3d", arr[i]);
    }
    printf("\n");
}

void CpArr(const ElemType *orig, ElemType *&newer){
    newer = (ElemType *) calloc(MaxSize, sizeof (ElemType));
    for(int i = 0; i < MaxSize; i++){
        newer[i] = orig[i];
    }
}

//冒泡排序
void BubbleSort(ElemType *arr){
    bool flag;
    for (int i = 0; i < MaxSize - 1; i++) {
        flag = false;
        for (int j = MaxSize - 1; j > i; j--) {
            if(arr[j - 1] > arr[j]){
                int tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                flag = true;
            }
        }
        if(!flag){
            return;
        }
    }
}

//快速排序
int partition(ElemType *arr, int low, int high){
    ElemType comp = arr[low];
    while(low < high){
        while((arr[high] >= comp) && (low < high)){
            high--;
        }
        arr[low] = arr[high];
        while((arr[low] <= comp) && (low < high)){
            low++;
        }
        arr[high] = arr[low];
    }
    arr[low] = comp;  //取出之后再塞入
    return low;
}

void QuickSort(ElemType *arr, int low, int high){
    if(low < high){
        int mid = partition(arr, low, high);
        QuickSort(arr, low, mid - 1);
        QuickSort(arr, mid + 1, high);
    }
}


//插入排序
void InsertSort(ElemType *arr){
    ElemType i, j, tmp; //一定要取出
    for (i = 1; i < MaxSize; i++){
        tmp = arr[i]; //i位置的值会因向后提供空位而改变，故需要另外存储记录
        for (j = i - 1; j >= 0 && arr[j] > arr[i]; j--){  //调整出位置
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = tmp;
    }
}


int main(){
    ElemType *arr, *arr1, *arr2;
    Init(arr);
    CpArr(arr, arr1);
    CpArr(arr, arr2);

    BubbleSort(arr);
    PrintArr(arr);

    QuickSort(arr1, 0, MaxSize - 1);
    PrintArr(arr1);

    InsertSort(arr2);
    PrintArr(arr2);
}

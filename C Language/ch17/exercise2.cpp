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

void Swap(ElemType &i, ElemType &j){
    ElemType tmp = i;
    i = j;
    j = tmp;
}

void Combine(ElemType *arr, int start, int mid, int end){
    static ElemType brr[Len];
    int brrIndex = start;
    int i = start;
    int j = mid + 1;
    while((i <= mid) && (j <= end)){
        if(arr[i] < arr[j]){
            brr[brrIndex++] = arr[i++];
        } else{
            brr[brrIndex++] = arr[j++];
        }
    }
    while (i <= mid){
        brr[brrIndex++] = arr[i++];
    }
    while(j <= end){
        brr[brrIndex++] = arr[j++];
    }
    for(int k = start; k <= end; k++){
        arr[k] = brr[k];
    }
}

void MergeSort(ElemType *arr, int start, int end){
    if(start + 1 == end){
        if(arr[start] > arr[end]){
            Swap(arr[start], arr[end]);
        }
        return;
    }
    if(start == end){
        return;
    }
    int mid = (start + end) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    Combine(arr, start, mid, end);
}

int main(){
    ElemType *arr;
    //12 63 58 95 41 35 65  0 38 44
    Init(arr);
    MergeSort(arr, 0, Len - 1); //记得-1
    PrintArr(arr);
}





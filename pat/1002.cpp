//
// Created by Seven on 2024/7/23.
//
#include <iostream>

using namespace std;

//2 1 -0.5 0 3.2
//2 2 1.5 1 0.5

//2 1 2.4 0 3.2
//1 1 0.5

//1 1000 0.5
//2 1 2.4 0 3.2

//1 1000 0.5
//1 1000 -0.5

//2 2 2.4 0 3.2
//2 3 1.56 1 0.55

//10 10 0.1 9 0.2 8 0.3 7 0.4 6 0.5 5 0.6 4 0.7 3 0.8 2 0.9 1 1
//10 1000 0.1 999 0.2 998 0.3 997 0.4 996 0.5 995 0.6 994 0.7 993 0.8 992 0.9 991 1

//10 20 0.1 18 0.2 16 0.3 14 0.4 12 0.5 10 0.6 8 0.7 6 0.8 4 0.9 2 1
//10 19 0.1 17 0.2 15 0.3 13 0.4 11 0.5 9 0.6 7 0.7 5 0.8 3 0.9 1 1

void sort(int * vari, double * coef, int i, int j){
    if(i >= j){
        return;
    }
    int start = i;
    int end = j;
    int tmp = vari[i];
    double cof = coef[i];
    while(i < j){
        // 从右向左找到比基准小的元素
        while(i < j && vari[j] <= tmp)
            j--;
        // 把比基准小的元素移到左边
        if(i < j){
            vari[i] = vari[j];
            coef[i] = coef[j];
            i++;
        }
        // 从左向右找到比基准大的元素
        while(i < j && vari[i] >= tmp)
            i++;
        // 把比基准大的元素移到右边
        if(i < j){
            vari[j] = vari[i];
            coef[j] = coef[i];
            j--;
        }
    }
    vari[i] = tmp;
    coef[i] = cof;
    sort(vari, coef, start, i - 1);
    sort(vari, coef, i + 1, end);
}

int main(){
    int k1;
    cin >> k1;
    int variable[20];
    int i;
    for(i = 0; i < 20; i++){ //初始化
        variable[i] = -1;
    }
    double coef[20];
    for(i = 0; i < 20; i++){ //初始化
        coef[i] = 0;
    }
    for (i = 0; i < k1; i++){ //读取第一组
        cin >> variable[i];
        cin >> coef[i];
    }
    int k2;
    cin >> k2;
    int j;
    int vary;
    double cof;
    int last = k1 - 1;
    for (j = 0; j < k2; j++){ //读取第二组
        cin >> vary;
        cin >> cof;
        int k;
        for (k = 0; k < 20; k++) {
            if (variable[k] == vary){
                coef[k] += cof;
                break;
            }
            if (variable[k] == -1){
                last = k;
                variable[k] = vary;
                coef[k] = cof;
                break;
            }
        }
    }
    sort(variable, coef, 0, last);
    //输出
    for (i = 0; i <= last; i ++){
        if (coef[i] == 0)
            last--;
    }
    cout << last + 1;
    for (i = 0; i < 20; i ++){
        if (coef[i] == 0)  //记得输出全
            continue;
        cout  << ' ' << variable[i] << ' ';
        printf("%0.1f", coef[i]);
    }
}
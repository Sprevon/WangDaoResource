//
// Created by Seven on 2024/7/23.
//
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int c = a + b;
    char arr[20];
    for (char & i : arr) {
        i = ' ';
    }
    int index = 0;
    int count = 0;
    if(c < 0){
        c = abs(c);
        while(c > 0){
            arr[index++] = (c % 10) + 48;
            count++;
            if (count == 3){
                arr[index++] = ',';
                count = 0;
            }
            c = c/10;
        }
        if (arr[index - 1] == ','){
            arr[index - 1] = '-';
        } else{
            arr[index] = '-';
        }
    } else if(c > 0){
        while(c > 0){
            arr[index++] = (c % 10) + 48;
            count++;
            if (count == 3){
                arr[index++] = ',';
                count = 0;
            }
            c = c/10;
        }
        if (arr[index - 1] == ','){
            arr[index - 1] = ' ';
        }
    } else {
        arr[index] = 48;
    }
    index = 19;
    while(index >= 0){
        if(arr[index] != ' ')
            cout << arr[index];
        index--;
    }
}
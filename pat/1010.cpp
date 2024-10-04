//
// Created by Seven on 2024/8/31.
//
/**
1:49
a:97

6 110 1 10

1 ab 1 2

a 10 2 16
**/


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int makeToDec(char digit){ //位数转换
    int d = (int) digit;
    if(d < 97) return d - 48;
    else return d - 97 + 10;
}

int main(){
//	string a = "111;
//	cout << "1:" << (int) a[0] << endl << "a:" << (int) 'a';

    string N1, N2, tag;
    long long int radix;
    cin >> N1 >> N2 >> tag >> radix;

    string tmp, target;
    if(tag == "1"){
        tmp = N1;
        target = N2;
    }
    else{
        tmp = N2;
        target = N1;
    }

    //将tmp转换为10进制
    long long int dec_tmp = makeToDec(tmp[0]);
//    for(long long int i = 0; i < (long long int)tmp.size(); i++){
//        dec_tmp += makeToDec(tmp[i]) * pow(radix, i);
//    }

    //一个个试target的进制
    long long int a = 2;
    for(long long int j = 0; j < (long long int)target.size(); j++){
        long long int one_digit = makeToDec(target[j]);
        if(one_digit >= a) a = one_digit + 1;
    }

    long long int dec_target = 0;
    if(target.size() == 1){
        if(target[0] != dec_tmp){
            cout << "Impossible";
        }else {
            cout << a;
        }
    }
    for(long long int j = (long long int)target.size() - 1, k = 0; j >=0 ; j--, k++){
        dec_target += makeToDec(target[j]) * pow(a, k);
    }

    if(dec_target == 0 || dec_tmp == 0){
        cout << "Impossible";
        return 0;
    }

    while(dec_target < dec_tmp){
        a++;
        long long int dec_target = 0;
        for(long long int j = 0; j < (long long int)target.size(); j++){
            dec_target += makeToDec(target[j]) * pow(a, j);
        }

    }

    if(dec_target > dec_tmp){
        cout << "Impossible";
    }else {
        cout << a;
    }
}
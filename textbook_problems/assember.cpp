//
// Created by Seven on 2024/5/7.
//

#include <iostream>

int add(int x, int y){
    return x + y;
}

int caller(){
    int temp1 = 125;
    int temp2 = 80;
    int sum = add(temp1, temp2);
    return sum;
}

int main(){
    std::cout << caller() << std::endl;
}
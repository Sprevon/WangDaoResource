//
// Created by Seven on 2024/7/31.
//

#include <iostream>

#define MAX 100

int findMain(int a[], int n) {
    int record[MAX];
    for (int &i: record) { //记得初始化
        i = 0;
    }
    for (int i = 0; i < n; i++) {
        record[a[i]]++;
        if (record[a[i]] > n / 2)
            return a[i];
    }
    return -1;
}

int main() {
    int a[] = {0, 5, 5, 3, 5, 1, 5, 7};
    std::cout << findMain(a, 8);
}


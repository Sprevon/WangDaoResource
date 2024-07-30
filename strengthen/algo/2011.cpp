//
// Created by Seven on 2024/7/30.
//
#include <iostream>

int getMid(int s1[], int s2[], int n) {
    int i1 = 0, i2 = 0, count = 0;
    while (count < n) {
        if (s1[i1] >= s2[i2]) {
            i2++;
            count++;
            if (count == n)
                return s2[--i2];
        }
        if (s1[i1] < s2[i2]) {
            i1++;
            count++;
            if (count == n)
                return s1[--i1];
        }
    }
    return 0;
}

int mSearch(int a[], int b[], int n) {
    int s1 = 0, s2 = 1;
    int d1 = n - 1, d2 = n - 1;
    int m1, m2;
    while (s1 != d1 || s2 != d2) {
        m1 = (s1 + d1) / 2;
        m2 = (s2 + d2) / 2;
        if (a[m1] == b[m1])
            return a[m1];
        if (a[m1] < b[m2]) {
            if ((s1 + d1) % 2 == 0) {
                s1 = m1;
                d2 = m2;
            } else {
                s1 = m1 + 1;
                d2 = m2;
            }
        } else {
            if ((s1 + d1) % 2 == 0) {
                d1 = m1;
                s2 = m2;
            } else {
                d1 = m1;
                s2 = m2 + 1;
            }
        }
    }
    return a[s1] < b[s2] ? a[s1] : b[s2];
}


int main() {
    int s1[5] = {11, 13, 15, 17, 19};
    int s2[5] = {2, 4, 6, 8, 20};
    std::cout << "My Solution " << getMid(s1, s2, 5) << std::endl;
    std::cout << "Standard Solution " << mSearch(s1, s2, 5);
}

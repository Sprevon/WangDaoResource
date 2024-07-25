//
// Created by Seven on 2024/7/23.
//
#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main() {
    int k1, k2, exp;
    double coef;
    map<int, double> poly;

    // 读取第一组多项式
    cin >> k1;
    for (int i = 0; i < k1; i++) {
        cin >> exp >> coef;
        poly[exp] += coef;
    }

    // 读取第二组多项式
    cin >> k2;
    for (int i = 0; i < k2; i++) {
        cin >> exp >> coef;
        poly[exp] += coef;
    }

    // 移除系数为0的项
    for (auto it = poly.begin(); it != poly.end(); ) {
        if (it->second == 0) {
            it = poly.erase(it);
        } else {
            ++it;
        }
    }

    // 输出结果
    cout << poly.size();
    for (auto it = poly.rbegin(); it != poly.rend(); ++it) {
        cout << " " << it->first << " " << fixed << setprecision(1) << it->second;
    }
    cout << endl;

    return 0;
}

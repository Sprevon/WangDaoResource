//
// Created by Seven on 2024/4/29.
//
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat) {
        y_length = (int) mat.size();
        x_length = (int) mat[0].size();
        int i;
        for (i = 0; i < y_length; i++) {
            quickSort(mat, 0, i);
        }
        for (i = 1; i < x_length; i++) {
            quickSort(mat, i, 0);
        }
        return mat;
    }

    void quickSort(vector<vector<int>> &mat, int x_index, int y_index) {
        int total_len;
        if (y_index == 0) {
            total_len = min(y_length, x_length - x_index);
        } else {
            total_len = min(x_length, y_length - y_index);
        }

        int i = 0, j = total_len - 1;
        if (i + 1 == j && mat[y_index + i][x_index + i] > mat[y_index + j][x_index + j]) { //如果只有两个且前大于后
            swap(mat[y_index + i][x_index + i], mat[y_index + j][x_index + j]);
            return;
        }
        if (i == j) return; //只有1个

        stack<int> stack;
        int sep1 = partition(mat, i, j, y_index, x_index);
        if (sep1 - 1 > i) {
            stack.push(i);
            stack.push(sep1 - 1);
        }
        if (sep1 + 1 < j) {
            stack.push(sep1 + 1);
            stack.push(j);
        }

        while (!stack.empty()){
            int high = stack.top();
            stack.pop();
            int low = stack.top();
            stack.pop();
            int sep_n = partition(mat, low, high, y_index, x_index);
            if (sep_n - 1 > low) {
                stack.push(low);
                stack.push(sep_n - 1);
            }
            if (sep_n + 1 < high) {
                stack.push(sep_n + 1);
                stack.push(high);
            }
        }
    }

    int partition(vector<vector<int>> &mat, int low, int high, int y_index, int x_index) {
        int tmp = mat[y_index + low][x_index + low];
        while (low < high) {
            while (low < high && mat[y_index + high][x_index + high] >= tmp)
                high--;
            mat[y_index + low][x_index + low] = mat[y_index + high][x_index + high];
            while (low < high && mat[y_index + low][x_index + low] <= tmp)
                low++;
            mat[y_index + high][x_index + high] = mat[y_index + low][x_index + low];
        }
        mat[y_index + low][x_index + low] = tmp;
        return low;
    }

    int x_length = 0;
    int y_length = 0;
};

int main() {
    vector<vector<int>> mat({{3, 3, 1, 1},
                             {2, 2, 1, 2},
                             {1, 1, 1, 2}});
    Solution solution;
    vector<vector<int>> mat_plus = solution.diagonalSort(mat);
    for (int i = 0; i < solution.y_length; i++) {
        for (int j = 0; j < solution.x_length; j++) {
            cout << mat_plus[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    vector<vector<int>> mat1({{1, 2},
                              {4, 3},
                              {8, 9}});
    vector<vector<int>> mat_plus_1 = solution.diagonalSort(mat1);
    for (int i = 0; i < solution.y_length; i++) {
        for (int j = 0; j < solution.x_length; j++) {
            cout << mat_plus[i][j] << " ";
        }
        cout << endl;
    }
}
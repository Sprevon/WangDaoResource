//
// Created by Seven on 2024/5/28.
//
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> result;
        for (int i = 1; i < mountain.size() - 1; i++){
            if (mountain[i - 1] < mountain[i] && mountain[i + 1] < mountain[i]){
                result.push_back(i);
                i++;
            }
        }
        return result;
    }
};

int main(){
    Solution solution;
    vector<int> input({1, 2, 3, 4, 2, 3, 2});
    vector<int> output = solution.findPeaks(input);
    for (int i = 0; i < output.size(); ++i) {
        cout << output[i] << " ";
    }
}
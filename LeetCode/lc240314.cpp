//
// Created by Seven on 2024/3/14.
//

#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long maxValue = 0;
        auto it1 = nums.end();
        while(it1 != nums.begin()){
            while(*(it1 - 1) > *(it1) && it1 != nums.end()){
                it1++;     //如果前值比后值大则递进
            }
            if(it1 == nums.begin()){
                break;
            }
            maxValue = *it1 + *(it1 + 1);  //计算最大元素
            *(it1 + 1) = maxValue;   //替换i+1
            nums.erase(it1);   //删除i
        }
        return maxValue;
    }
};


int main(){
    vector<int> arr{2,3,7,9,3};
    Solution solution;
    cout << solution.maxArrayValue(arr) << endl;
}
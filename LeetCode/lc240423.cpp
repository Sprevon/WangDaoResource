//
// Created by Seven on 2024/4/23.
//
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        //得到不忍的情况下不满意顾客的人数/时间数列
        int unsat = 0, sum = 0;
        for (int i = 0; i < customers.size(); i++) {
            unsat += customers[i] * grumpy[i];
            sum += customers[i];
        }

        //选择最优忍耐时间
        int begin = 0;
        int end = (int)customers.size() - 1;
        int min_unsat = 0, tmp_unsat = 0;
        for (int i = 0; i < minutes; i++){
            tmp_unsat += customers[i] * grumpy[i];
        }
        min_unsat = tmp_unsat;
        begin++;
        while(begin + minutes - 1 <= end){
            tmp_unsat += (customers[begin + minutes - 1] * grumpy[begin + minutes - 1] -
                    customers[begin - 1] * grumpy[begin - 1]);
            if(tmp_unsat > min_unsat)
                min_unsat = tmp_unsat;
            begin++;
        }
        return sum - unsat + min_unsat;
    }
};

int main(){
    vector<int> customers = {1,0,1,2,1,1,7,5};
    vector<int> grumpy = {0,1,0,1,0,1,0,1};
    int minutes = 3;
    Solution solution;
    cout << solution.maxSatisfied(customers, grumpy, minutes) << endl;
}
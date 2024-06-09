//
// Created by Seven on 2024/5/17.
//
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        int n = profit.size(), res = 0, i = 0, best = 0;
        for (int j = 0; j < n; ++j) {
            jobs.emplace_back(difficulty[j], profit[j]);
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());
        for (int w : worker) {
            while (i < n && w >= jobs[i].first) {
                best = max(best, jobs[i].second);
                i++;
            }
            res += best;
        }
        return res;
    }
};
//
//作者：力扣官方题解
//        链接：https://leetcode.cn/problems/most-profit-assigning-work/solutions/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


int main(){
    Solution solution;
}
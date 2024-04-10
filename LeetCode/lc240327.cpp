//
// Created by Seven on 2024/3/27.
//
#include <cmath>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

//struct Range{
//    int start, end;
//    Range(int s, int e){
//        start = s;
//        end = e;
//    }
//};

class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        int countWays = 0;
        quickSortPerfix(ranges);
        combineUnion(ranges);
        countInstint(ranges, countWays);
        return countWays;
    }

    void quickSortPerfix(vector<vector<int>> &ranges) {
        sort(ranges.begin(), ranges.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[0] < b[0];
        });
    }

//    慢了点
//    void quickSortPerfix(vector<vector<int>> &ranges){ //根据前序进行快速排序
//        int front = 0,end = (int)ranges.size() - 1;
//        stack<Range> stack;
//        stack.emplace(front, end);
//        while(!stack.empty()){
//            Range range = stack.top();  //获取栈顶索引对
//            stack.pop();
//            int cmp = ranges[range.start][0];   //定义比较元素为当前区间的左区间
//            int left = range.start + 1;
//            int right = range.end;
//            while(left < right){
//                while(ranges[left][0] < cmp && left < right){
//                    left++;
//                }
//                while(ranges[right][0] >= cmp && left < right){
//                    right--;
//                }
//                swap(ranges[left], ranges[right]);
//            }
//            if(ranges[range.start][0] > ranges[right][0]){
//                swap(ranges[range.start], ranges[right]);
//            }else{
//                right--;
//            }
//            if (range.start < right){
//                stack.emplace(range.start, right);
//            }
//            if (right + 1 < range.end){
//                stack.emplace(right + 1, range.end);
//            }
//        }
//    }


    void combineUnion(vector<vector<int>> &ranges) {
        vector<vector<int>> merged;
        for (const auto& range : ranges) {
            if (merged.empty() || merged.back()[1] < range[0]) {  // 如果没有重叠
                merged.push_back(range);
            } else {  // 如果有重叠，合并区间
                merged.back()[1] = max(merged.back()[1], range[1]);
            }
        }
        ranges = std::move(merged);  // 更新原区间数组
    }


//    void combineUnion(vector<vector<int>> & ranges){//将有交集的数组进行合并
//        int index = 0;
//        while (index + 1 < ranges.size()) {
//            if (ranges[index][1] >= ranges[index + 1][0]) {  // 当前一个的末尾比后一个的头大
//                ranges[index][1] = max(ranges[index][1], ranges[index + 1][1]); // 末尾合并
//                ranges.erase(ranges.begin() + index + 1);
//            } else {
//                index++;
//            }
//        }
//    }


// 出现内存访问错误。访问了已被擦除的内存        TODO:搞清楚为什么会 ERROR: AddressSanitizer: heap-use-after-free on address 0x502000000070 at pc 0x55729026e210 bp 0x7ffe06e5ebe0 sp 0x7ffe06e5ebd8
//    void combineUnion(vector<vector<int>> & ranges){//将有交集的数组进行合并
//        int index = 0;
//        while(index + 1 < ranges.size()){
//            while(ranges[index][1] > ranges[index + 1][0]){//当前一个的末尾比后一个的头大
//                if(ranges[index][1] > ranges[index + 1][1]){
//                    ranges.erase(ranges.begin() + index + 1); //若下一个的末尾数比前一个的低
//                }else{
//                    ranges[index][1] = ranges[index + 1][1]; //末尾合并
//                    ranges.erase(ranges.begin() + index + 1);
//                }
//            }
//            index++;
//        }
//    }

    void countInstint(vector<vector<int>>& ranges, int& countWays) {
        long long mod = 1000000007;  // 定义模数
        long long totalWays = 1;  // 初始值为1，因为2^0=1
        for (size_t i = 0; i < ranges.size(); ++i) {
            totalWays = (totalWays * 2) % mod;  // 每次迭代计算2的幂次并取模
        }
        countWays = static_cast<int>(totalWays);  // 转换回int类型
    }

//    解决不了大数问题
//    void countInstint( vector<vector<int>> ranges, int & countWays){//计算有多少组合
//        countWays = (int )fmod(pow(2, ranges.size()), (pow(10, 9) + 7));
//    }
};

int main(){
//    vector<vector<int>> ranges = {{1,3},{10,20},{2,5},{4,8}};
    vector<vector<int>> ranges = {{6,10},{5,15}};
    Solution solution;
    cout << solution.countWays(ranges) << endl;
}
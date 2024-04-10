//
// Created by Seven on 2024/4/1.
//

#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string finalString(string s) {
        string so;
        for(char i : s){
            if(i != 'i'){
                so.push_back(i);
            }else{
                reverse(so.begin(),so.end());
            }
        }
        return so;
    }
};
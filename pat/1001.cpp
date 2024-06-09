//
// Created by Seven on 2024/5/28.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    long unsigned int cities;
    cin >> cities;
    long unsigned int highWays;
    cin >> highWays;

    //初始化
    vector<long unsigned int> cityWaysCost;
    cityWaysCost.reserve(highWays);
    long unsigned int i;
    for ( i = 0; i <= highWays; i++) {
        cityWaysCost.push_back(0);
    }

    //录入各城市损失
    long unsigned int c1, c2, cost, dest, high = 0;
    for (i = 1; i <= highWays; i++){
        cin >> c1;
        cin >> c2;
        cin >> cost;
        cin >> dest;
        if(dest){
            cityWaysCost[c1] += cost;
            cityWaysCost[c2] += cost;
            if (cityWaysCost[c1] > high)
                high = cityWaysCost[c1];
            if(cityWaysCost[c2] > high)
                high = cityWaysCost[c2];
        }
    }

    //选择潜在损失最严重的
    vector<long unsigned int> out;
    for(i = 1; i <= highWays; i++){
        if (cityWaysCost[i] == high)
            out.push_back(i);
    }
    if (out.size() == cities){
        cout << 0;
    }else{
        cout << out[0];
        if(out.size() > 1){
            for (i = 1; i < out.size(); i ++){
                cout << " " << out[i];
            }
        }
    }
}
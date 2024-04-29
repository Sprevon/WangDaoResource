//
// Created by Seven on 2024/4/26.
//
#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

class SnapshotArray {
public:
    vector<vector<pair<int, int>>> snapshot;
    int currSnapId = 0;

    explicit SnapshotArray(int length) {
        for (int i = 0; i < length; i++) {
            snapshot.emplace_back(); //初始化记录
        }
    }

    void set(int index, int val) {
        snapshot[index].emplace_back(currSnapId, val);   //记录修改历史
    }

    int snap() {
        return currSnapId++;
    }

    int get(int index, int snap_id) {
        auto value = upper_bound(snapshot[index].begin(), snapshot[index].end(),
                                 pair<int, int>{snap_id + 1, -1});
        return value == snapshot[index].begin() ? 0 : prev(value)->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */

class SnapshotArray2 {
public:
    SnapshotArray2(int length): snap_cnt(0), data(length) {}

    void set(int index, int val) {
        data[index].emplace_back(snap_cnt, val);
    }

    int snap() {
        return snap_cnt++;
    }

    int get(int index, int snap_id) {
        auto x = upper_bound(data[index].begin(), data[index].end(), pair<int, int>{snap_id + 1, -1});
        return x == data[index].begin() ? 0 : prev(x)->second;
    }

private:
    int snap_cnt;
    vector<vector<pair<int, int>>> data;
};



int main() {
    int length = 3;
    int index = 0;
    int val = 5;
    int snap_id = 2;

    auto *obj = new SnapshotArray(length);
    obj->set(index, val);
//    int param_2 = obj->snap();
//    obj->set(0, 6);
    obj->snap();
    obj->snap();
    obj->snap();
    int param_3 = obj->get(index, snap_id);

//    cout << param_2 << endl;
    cout << param_3 << endl;
    return 0;
}
//
// Created by Seven on 2024/7/30.
//

#include<iostream>
#include <algorithm>

using namespace std;

const int inf = 99999999;


int main(){
    //存入信息
    int n, m, c1, c2;
    cin >> n >> m >> c1 >> c2;
    //存入救援队信息
    int teams[510];
    for(int i = 0; i < n; i++){
        cin >> teams[i];
    }
    //使用邻接矩阵存储路径信息
    int roads[510][510];
    fill(roads[0], roads[0] + 510 * 510, inf);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        cin >> roads[x][y];
        cin >> roads[y][x];
    }
    int dis[510], w[510], num[510];
    bool visit[510];
    fill(dis, dis + 510, inf);
    //开始迪杰斯特拉算法
    dis[c1] = 0;
    w[c1] = teams[c1];
    num[c1] = 1;
    for(int i = 0; i < n; i++){
        int u = -1, minn = inf;
        for(int j = 0; j < n; j++){
            if(visit[j] == false && dis[j] < minn){
                u = j;
                minn = dis[j];
            }
        }
        if( u == -1) break;
        visit[u] = true;
        for(int v = 0; v < n; v++){
            if(visit[v] == false && roads[u][v] != inf) {
                if(dis[u] + roads[u][v] < dis[v]) {
                    dis[v] = dis[u] + roads[u][v];
                    num[v] = num[u];
                    w[v] = w[u] + teams[v];
                } else if(dis[u] + roads[u][v] == dis[v]) {
                    num[v] = num[v] + num[u];
                    if(w[u] + teams[v] > w[v])
                        w[v] = w[u] + teams[v];
                }
            }
        }
    }

    //输出
    cout << num[c2] << " " << w[c2];
}

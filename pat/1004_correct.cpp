//
// Created by Seven on 2024/8/30.
//
#include<iostream>
#include<vector>
using namespace std;

const int MAXN = 100;
vector<int> tree[MAXN];//数组容器
int cnt[MAXN];//记录每一层的叶子节点个数，也就是没有孩子的节点
int sum=0;

void dfs(int id, int level)//当前节点编号，
{
    if (tree[id].empty())//如果为空,说明是叶子节点
    {
        cnt[level]++;
        return;
    }
    for (int i = 0; i < tree[id].size(); i++)
    {
        dfs(tree[id][i], level + 1);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int d=m;
    while (m--)
    {
        int id, k;
        cin >> id >> k;
        while (k--)
        {
            int child;
            cin >> child;
            tree[id].push_back(child);
        }
    }
    dfs(1, 0);
    for (int i = 0; i < MAXN; i++)
    {
        cout<<cnt[i];
        sum+=cnt[i];
        if((sum+d)==n)
        {
            break;
        }else cout<<' ';
    }
    cout << endl;
    return 0;


}
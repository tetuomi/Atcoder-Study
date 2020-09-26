#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
  https://atcoder.jp/contests/dp/tasks/dp_g
*/

vector<vector<int>> graph(100100);
int dp[100100];

// f(i) == 頂点iを起点とする最大経路
int f(int n)
{
    if (dp[n] != -1) return dp[n];

    int res = 0;
    for (auto v: graph[n]) res = max(res, f(v)+1);
    return dp[n] = res;
}

int main()
{
    int n,m;
    cin >> n >> m;

    for (int i = 0;i < m;i++)
    {
        int x,y;
        cin >> x >> y;
        x--;y--;
        graph[x].push_back(y);
    }

    // 初期化
    for (int i = 0;i < n;i++) dp[i] = -1;

    int ans = 0;
    for (int i = 0;i < n;i++) ans = max(ans, f(i));

    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;


bool visited[3010] = {false};
bool dfs(vector<vector<int>> &G, int start, int end)
{
    visited[start] = true;
    if (start == end) return true;
    for (auto n : G[start])
    {
        if (visited[n]) continue;
        if (dfs(G, n, end)) return true;
    }
    return false;
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    int n;
    cin >> n;

    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    vector<ll> x(n), y(n), r(n);
    int s_i, t_i;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> r[i];
        if ((x[i]-sx)*(x[i]-sx)+(y[i]-sy)*(y[i]-sy) == r[i]*r[i]) s_i = i;
        if ((x[i]-tx)*(x[i]-tx)+(y[i]-ty)*(y[i]-ty) == r[i]*r[i]) t_i = i;
    }

    vector<vector<int>> G(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            ll d = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
            if ((r[i] + r[j])*(r[i] + r[j]) < d || (r[i] - r[j])*(r[i] - r[j]) > d) continue;
            G[i].push_back(j);
            G[j].push_back(i);
        }
    }

    cout << (dfs(G, s_i, t_i)? "Yes" : "No") << '\n';

    return 0;
}
#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    rep (i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<int> que;
    que.push(0);
    int mod = 1e9 + 7;
    vector<int> dist(n, 0);
    vector<int> cnt(n, 0);
    cnt[0] = 1;
    while (!que.empty())
    {
        auto v = que.front();
        que.pop();

        for (auto e : graph[v])
        {
            if (dist[e] == 0)
            {
                dist[e] = dist[v] + 1;
                cnt[e] = cnt[v];
                que.push(e);
            }
            else if (dist[e] == dist[v] + 1)
            {
                cnt[e] += cnt[v];
                cnt[e] %= mod;
            }
        }
    }

    cout << cnt[n-1] << endl;

    return 0;
}
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

    vector<vector<int>> g(n);
    rep (i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    queue<int> q;
    q.push(0);
    vector<int> dist(n, -1);
    dist[0] = 0;
    while (!q.empty())
    {
        int v = q.front(); q.pop();
        for (auto nv : g[v])
        {
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            q.push(nv);
        }
    }

    if (dist[n-1] != -1 && dist[n-1] <= 2) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;


    return 0;
}
#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>());
    map<pair<int, int>, pair<ll, ll>> dist;
    rep (i, 0, m)
    {
        int a, b;
        ll x, y;
        cin >> a >> b >> x >> y;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
        dist[{a, b}] = {x, y}; // aからbに行くのに右にx、上にy
        dist[{b, a}] = {-x, -y};
    }

    const ll INF = 1e18;
    vector<pair<ll, ll>> ans(n, {INF, INF});
    ans[0] = {0, 0};

    queue<int> q;
    q.push(0);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        for (auto u: g[v])
        {
            if (ans[u] != pair<ll, ll>(INF, INF)) continue;
            ans[u] = {ans[v].first + dist[{v, u}].first, ans[v].second + dist[{v, u}].second};
            q.push(u);
        }
    }

    for (auto v: ans)
    {
        if (v == pair<ll, ll>(INF, INF)) cout << "undecidable" << endl;
        else cout << v.first << ' ' << v.second << endl;
    }

    return 0;
}
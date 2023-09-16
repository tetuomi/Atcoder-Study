#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int n, m;
vector<vector<ll>> g(100, vector<ll>(100, -1));
vector<bool> seen(100, false);

ll dfs()
{
    
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    cin >> n >> m;
    rep (i, 0, m)
    {
        int x, y;
        ll c;
        cin >> x >> y >> c;
        x--; y--;
        g[x][y] = c;
        g[y][x] = c;
    }





    return 0;
}
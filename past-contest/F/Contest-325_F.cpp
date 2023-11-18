#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

struct DataType
{
    ll l;
    ll c;
    ll k;
};


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n;
    cin >> n;
    vector<ll> d(n);
    rep (i, 0, n) cin >> d[i];

    vector<DataType> lck(2);
    rep (i, 0, 2) cin >> lck[i].l >> lck[i].c >> lck[i].k;

    vector dp(n+1, vector<vector<ll>>(lck[0].k+1, vector<ll>(lck[1].k+1, 1e18)));
    rep (i, 0, lck[0].k+1) rep (j, 0, lck[1].k+1) dp[0][i][j] = 0;
    rep (i, 0, n) rep (j, 0, lck[0].k+1) rep (k, 0, lck[1].k+1)
    {
        if (dp[i][j][k] != 0) continue;
        rep (j2, j, lck[0].k+1) rep (k2, k, lck[1].k+1)
        {
            dp[i+1][j2][k2] = min(dp[i+1][j2][k2],
                                    max(d[i] - (ll)(j2-j)*lck[0].l - (ll)(k2-k)*lck[1].l, 0LL));
        }
    }

    // cout << dp[0].size() << " " << dp[0][0].size() << endl;

    // for (auto xx : dp)
    // {
    //     cout << endl;
    //     for (auto x : xx)
    //     {
    //         for (auto v : x) cout << v << ' ';
    //     }
    //     cout << endl;
    // }

    ll ans = 1e18;
    rep (j, 0, lck[0].k+1) rep (k, 0, lck[1].k+1)
    {
        if (dp[n][j][k] == 0) ans = min(ans, lck[0].c*j + lck[1].c*k);
    }
 
    cout << (ans != 1e18? ans : -1) << endl;

    return 0;
}
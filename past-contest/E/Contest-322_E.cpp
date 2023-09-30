#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, K, P;
    cin >> n >> K >> P;
    vector<ll> c(n);
    vector<vector<int>> a(n, vector<int>(K));

    rep (i, 0, n)
    {
        cin >> c[i];
        rep (j, 0, K) cin >> a[i][j];
    }

    vector<map<vector<int>, ll>> dp(n+1, map<vector<int>, ll>());

    rep (i, 0, n)
    {
        dp[i+1][a[i]] = c[i];
        for (auto x: dp[i])
        {
            vector<int> v = x.first;
            ll cost = x.second;

            // i番目を使う
            vector<int> parameter;
            rep (j, 0, K) parameter.push_back(min(v[j] + a[i][j], P));
            if (dp[i+1].count(parameter) == 0) dp[i+1][parameter] = 1e18;
            dp[i+1][parameter] = min(dp[i+1][parameter], cost + c[i]);

            // i番目を使わない
            if (dp[i+1].count(v) == 0) dp[i+1][v] = 1e18;
            dp[i+1][v] = min(dp[i+1][v], cost);
        }
    }

    // for (auto x: dp[n])
    // {
    //     for (auto y: x.first) cout << y << ' ';
    //     cout <<"cost: " << x.second << endl;
    // }

    if (dp[n][vector<int>(K, P)] == 0) cout << -1 << endl;
    else cout << dp[n][vector<int>(K, P)] << endl;



    return 0;
}
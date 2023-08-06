#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, p;
    cin >> n >> p;
    vector<ll> a(n);
    rep (i, 0, n) cin >> a[i];

    vector dp(2, vector<ll>(n+1, 0));
    dp[0][0] = 1;
    rep (i, 0, n)
    {
        if (a[i] % 2 == 0)
        {
            dp[0][i+1] = 2*dp[0][i];
            dp[1][i+1] = 2*dp[1][i];
        }
        else
        {
            dp[0][i+1] = dp[0][i] + dp[1][i];
            dp[1][i+1] = dp[0][i] + dp[1][i];
        }
    }

    cout << dp[p][n] << endl;

    // for (auto v : dp[0]) cout << v << ' ';
    // cout << endl;
    // for (auto v : dp[1]) cout << v << ' ';
    // cout << endl;

    return 0;
}
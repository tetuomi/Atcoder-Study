#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n;
    cin >> n;
    vector<double> p(n);
    rep (i, 0, n) cin >> p[i];

    vector dp(n + 1, vector<double>(n + 1, 0.0));
    rep (i, 0, n)
    {
        rep (j, 0, i+1)
        {
            dp[i+1][j+1] = (double)0.9*dp[i][j] + p[i];
            if (i >= j+1) dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]);
        }
    }

    // for (auto v : dp)
    // {
    //     for (auto x : v)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    double a[n+1] = {0.0};
    rep (i, 0, n) a[i+1] = 1.0 + a[i] * 0.9;
    double b[n+1] = {0.0};
    rep (i, 1, n+1) b[i] = 1200.0 / (double)sqrt(i);
    // for (auto x : a) cout << x << " ";cout << endl;
    // for (auto x : b) cout << x << " ";cout << endl;

    double ans = dp[1][1] / a[1] - b[1];
    rep (i, 0, n) rep (j, 0, n)
    {
        if (i >= j) ans = max(ans, dp[i+1][j+1] / a[j+1] - b[j+1]);
    }

    cout << ans << endl;

    return 0;
}
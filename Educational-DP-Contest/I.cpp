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

    // dp[i][j] := i枚目までのコインを投げて、j枚が表になる確率
    vector<vector<double>> dp(n+1, vector<double>(n+1, 0));

    dp[0][0] = 1;
    rep (i, 0, n)
    {
        rep (j, 0, i+1)
        {
            // i枚目が表になる確率
            dp[i+1][j+1] += p[i] * dp[i][j];

            // i枚目が裏になる確率
            dp[i+1][j] += (1.0 - p[i]) * dp[i][j];
        }
    }

    double ans = 0;
    rep (i, n/2+1, n+1) ans += dp[n][i];
    cout << ans << endl;

    // rep (i, 0, n+1)
    // {
    //     rep (j, 0, n+1)
    //     {
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    return 0;
}
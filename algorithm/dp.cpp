#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    /********重複組み合わせ********/
    /*
    n種類の品物があり，i番目の品物はa_i個ある．（異なる品物は区別できるが，同じ品物は区別できない）
    品物をm個選ぶ組み合わせの総数を求め，Mで割ったあまりを出力する．
    入力例： n = 3
            m = 3
            a = {1, 2, 3}
            M = 10000
    出力例： 6
    解法： O(nm)
    */

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep (i, 0, n) cin >> a[i];
    int mod;
    cin >> mod;

    // dp[i][j] := i個までの品物のうち，j個選ぶ組み合わせの総数
    vector<vector<int>> dp(n+1, vector<int>(m+1));

    // 1つも選ばない通りは1通り
    for (int i = 0; i <= n; i++) dp[i][0] = 1;

    // dp遷移
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j - 1 - a[i] >= 0)
            {
                // 負にならないように注意
                dp[i+1][j] = (dp[i+1][j-1] + dp[i][j] - dp[i][j-1-a[i]] + mod) % mod;
            }
            else
            {
                dp[i+1][j] = dp[i+1][j-1] + dp[i][j] % mod;
            }
        }
    }

    for (auto row : dp)
    {
        for (auto e : row) cout << e << ' ';
        cout << endl;
    }

    // answer
    cout << dp[n][m] << endl;

    return 0;
}
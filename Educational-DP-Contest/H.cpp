#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    ll h,w;
    cin >> h >> w;
    vector<string> a(h);

    for (int i = 0;i < h;i++) cin >> a[i];

    vector<vector<ll>> dp(1010, vector<ll>(1010, 0));

    dp[1][1] = 1;
    for (int i = 0;i < h;i++)
    {
        for (int j = 0;j < w;j++)
        {
            if (a[i][j] == '#') continue;
            if (i != 0) dp[i+1][j+1] += dp[i][j+1];
            if (j != 0) dp[i+1][j+1] += dp[i+1][j];
            dp[i+1][j+1] %= 1000000007;
        }
    }

    cout << dp[h][w] << endl;

    return 0;
}

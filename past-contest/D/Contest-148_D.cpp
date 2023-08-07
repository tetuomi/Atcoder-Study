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
    vector<int> a(n);
    rep (i, 0, n) cin >> a[i];

    vector<int> dp(n+1, 0);

    int cur = 1;
    rep (i, 0, n)
    {
        if (a[i] == cur)
        {
            dp[i+1] = dp[i];
            cur++;
        }
        else
        {
            dp[i+1] = dp[i] + 1;
        }
    }

    cout << (dp[n] != n? dp[n]:-1)<< endl;

    return 0;
}
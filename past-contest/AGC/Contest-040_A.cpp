#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    string s;
    cin >> s;
    ll n = s.size();
    vector<vector<ll>> cnt(2, vector<ll>(n+1, 0));
    rep (i, 0, n)
    {
        if (s[i] == '<') cnt[0][i+1] = cnt[0][i]+1;
        if (s[n-1-i] == '>') cnt[1][n-(i+1)] = cnt[1][n-i]+1;
    }

    ll ans = 0;
    rep (i, 0, n+1) ans += max(cnt[0][i], cnt[1][i]);

    cout << ans << endl;

    // for (int i = 0;i <= n;i++) cout << cnt[0][i] << ' ' << cnt[1][i] << endl;


    return 0;
}
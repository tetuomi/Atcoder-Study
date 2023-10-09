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
    vector<string> s(n);
    rep (i, 0, n) cin >> s[i];

    map<string, ll> mp;
    rep (i, 0, n)
    {
        sort(s[i].begin(), s[i].end());
        mp[s[i]]++;
    }

    ll ans = 0;
    for (auto m: mp)
    {
        ans += m.second * (m.second - 1) / 2;
    }

    cout << ans << endl;


    return 0;
}
#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll n, c, k;
    cin >> n >> c >> k;

    vector<ll> t(n);
    rep (i, 0, n) cin >> t[i];

    sort(t.begin(), t.end());

    ll ans = 0;
    ll cnt = 0;
    while (cnt < n)
    {
        ll now = t[cnt];
        ll tmp_cnt = 0; // 乗せられる人数
        while (cnt + tmp_cnt < n && now + k >= t[cnt + tmp_cnt] && tmp_cnt < c) tmp_cnt++;
        ans++;
        cnt += tmp_cnt;
    }

    cout << ans << endl;

    return 0;
}
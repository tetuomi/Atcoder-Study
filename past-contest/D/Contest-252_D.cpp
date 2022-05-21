#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc252/tasks/abc252_d
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    int n;
    int MAX = 2 * 1e5 + 5;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<ll> cnt(MAX+1, 0);
    for (int i = 0; i < n; i++) cnt[a[i]]++;

    for (int i = 0; i < MAX; i++) cnt[i+1] += cnt[i];

    // cnt[i] : i以下の個数
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += cnt[a[i]-1] * (n - cnt[a[i]]);
    }

    cout << ans << '\n';

    return 0;
}
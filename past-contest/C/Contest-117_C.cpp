#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc117/tasks/abc117_c
    解法：
    各地点がどれだけずれているかを計算。
    ずれもソートし、1 ~ n - (m - 1)個のずれの合計が答え。
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    ll n, m;
    cin >> n >> m;
    vector<ll> x(m);

    if (n >= m)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < m; i++) cin >> x[i];
    sort(x.begin(), x.end());

    vector<ll> diff(m-1);

    for (int i = 1; i < m; i++)
    {
        diff[i-1] = x[i] - x[i-1];
    }

    sort(diff.begin(), diff.end());

    ll ans = accumulate(diff.begin(), prev(diff.end(), n-1), 0LL);

    cout << ans << endl;

    return 0;
}
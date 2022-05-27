#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc101/tasks/arc099_a

    想定解:
    N要素を長さKの区間で被覆するための最小個数がそのまま答えになる。
    これは要素の中身に依存しない。
    1要素ずつかぶらせていけば良い。
    答えはceil((n-1)/(k-1))
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    ll n ,k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll min_value = *min_element(a.begin(), a.end());
    ll min_value_index = find(a.begin(), a.end(), min_value) - a.begin();

    if (min_value_index + 1 <= k)
    {
        ll reserve = n - k;
        ll ans = 1 + ceil(1.0 * reserve / (k-1));
        cout << ans << '\n';
    }
    else
    {
        ll reserve = n - ((min_value_index ) + ((k-1) - (min_value_index+1) % (k-1)));
        ll ans = 1 + ceil(1.0 * (min_value_index+1 - k) / (k-1));
        ans += ceil(1.0 * reserve / (k-1));

        cout << ans << '\n';
    }

    return 0;
}
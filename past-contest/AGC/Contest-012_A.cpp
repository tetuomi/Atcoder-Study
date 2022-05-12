#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/agc012/tasks/agc012_a
*/

int main(void)
{
    cin >> setprecision(12);

    int n;
    cin >> n;
    vector<ll> a(3 * n);
    for (int i = 0; i < 3 * n; i++) cin >> a[i];

    sort(a.rbegin(), a.rend());

    ll ans = 0;
    for (int i = 1, j = 0; j < n; i += 2, j++)
    {
        ans += a[i];
    }

    cout << ans << endl;


    return 0;
}

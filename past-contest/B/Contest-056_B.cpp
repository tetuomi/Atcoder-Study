#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll x;
    cin >> x;
    ll ans = 0;
    while (ans * (ans-1) / 2 < x) ans++;
    cout << ans-1 << endl;

    return 0;
}
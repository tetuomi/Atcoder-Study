#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll n, m;
    cin >> n >> m;

    ll ans = 0;
    if (n <= m/2) ans = max(ans, n);
    if (n >= m/2) ans = max(ans, m/2);
    if (m-2*n > 0) ans = max(ans, n + (m-2*n)/4);

    cout << ans << endl;

    return 0;
}
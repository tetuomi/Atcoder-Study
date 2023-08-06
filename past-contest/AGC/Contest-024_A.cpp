#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    ll ans = a-b;
    if (k % 2 == 1) ans *= -1;
    if (1e18 < abs(ans)) cout << "Unfair" << endl;
    else cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;

    ll ans = n*4*q;
    ans = min(ans, n*2*h);
    ans = min(ans, n*s);
    ans = min(ans, (n/2)*d + (n%2)*min({4*q, 2*h, s}));

    cout << ans << endl;

    return 0;
}
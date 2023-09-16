#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll l, r;
    cin >> l >> r;

    ll ans = 202020LL;
    for (ll i = l; i < r; i++)
    {
        for (ll j = i + 1; j <= r; j++)
        {
            ans = min(ans, ((i * j) % 2019LL));
            if (ans == 0LL)
            {
                cout << ans << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll n, a, b;
    cin >> n >> a >> b;

    if (a > b) swap(a, b);
    if ((b-a) % 2 == 0)
    {
        cout << (b-a)/2 << endl;
    }
    else
    {
        ll ans = min(a-1, b-1);
        ans += 1 + (b-a-1)/2;

        ans = min(ans, n-b +1+(n-(a+(n-b))-1)/2);

        cout << ans << endl;
    }

    return 0;
}
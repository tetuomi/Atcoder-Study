#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    string s;
    cin >> s;

    ll ans = 0;
    ll n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            ans += (n - (i + 1));
            ans += 2 * i;
        }
        else
        {
            ans += i;
            ans += 2 * (n - (i + 1));
        }
    }

    cout << ans << '\n';

    return 0;
}
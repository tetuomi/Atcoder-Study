#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll n, m;
    cin >> n >> m;

    if (n * n < m)
    {
        cout << -1 << endl;
        return 0;
    }

    if (n * n == m)
    {
        cout << m << endl;
        return 0;
    }

    ll ok = 1, ng = n;
    ll mid = 1;
    while (ng - ok > 1)
    {
        mid = (ok + ng) / 2;
        if (mid * mid <= m)
        {
            ok = mid;
        }
        else
        {
            ng = mid;
        }
    }

    cout << ok * (m/ok+m%ok) << endl;

    return 0;
}

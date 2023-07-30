#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    rep (i, 0, n) cin >> a[i];
    rep (i, 0, m) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 1e9+1000;
    for (auto v : a)
    {
        auto it = lower_bound(b.begin(), b.end(), v);
        if (it != b.end())
        {
            ans = min({ans, abs(v - *it)});

        }
        else
        {
            ans = min(ans, abs(v - b[m-1]));
        }
    }

    for (auto v : b)
    {
        auto it = lower_bound(a.begin(), a.end(), v);
        if (it != a.end())
        {
            ans = min({ans, abs(v - *it)});

        }
        else
        {
            ans = min(ans, abs(v - a[m-1]));
        }
    }

    cout << ans << endl;

    return 0;
}
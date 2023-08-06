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
    int l_max = 0, r_min = 1e7;
    rep (i, 0, m)
    {
        int l, r;
        cin >> l >> r;
        l_max = max(l_max, l);
        r_min = min(r_min, r);
    }

    int ans = 0;
    ans += n - l_max;
    ans -= n - r_min - 1;
    ans = max(ans, 0);
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n;
    int m;
    cin >> n >> m;
    vector<pair<int, int>> sc(m);
    rep (i, 0, m) cin >> sc[i].first >> sc[i].second;

    rep (_n, 0, 1000)
    {
        bool ok = true;
        string ans = to_string(_n);
        if (ans.size() != n) continue;
        rep (i, 0, m)
        {
            if (ans[sc[i].first-1] != sc[i].second + '0')
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << ans << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
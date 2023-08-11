#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll n;
    cin >> n;
    map<ll, int> cnt;
    vector<ll> b, c(1, 0);

    rep (i, 0, n)
    {
        int a;
        cin >> a;
        cnt[a]++;

        if (cnt[a] == 2)
        {
            b.push_back(a);
        }
        else if (cnt[a] == 4)
        {
            c.push_back(a);
        }
    }

    sort(b.begin(), b.end(), greater<ll>());
    sort(c.begin(), c.end(), greater<ll>());
    ll ans = 0;
    if (b.size() >= 2)
    {
        ans = b[0]*b[1];
    }
    ans = max(ans, c[0]*c[0]);

    cout << ans << endl;

    return 0;
}
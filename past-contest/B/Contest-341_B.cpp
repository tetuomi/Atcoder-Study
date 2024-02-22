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
    cin >> n;

    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<ll> s(n-1), t(n-1);
    rep (i, 0, n-1) cin >> s[i] >> t[i];

    rep (i, 0, n-1)
    {
        a[i+1] += (a[i]/s[i])*t[i];
    }

    cout << a[n-1] << endl;

    return 0;
}
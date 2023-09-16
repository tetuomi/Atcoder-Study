#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, k, s;
    cin >> n >> k >> s;

    rep (i, 0, k) cout << s << endl;
    rep (i, 0, n - k) cout << (int)(s == 1e9 ? 1 : 1e9) << endl;

    return 0;
}
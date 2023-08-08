#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, l;
    cin >> n >> l;
    vector<string> s(n);
    rep (i, 0, n) cin >> s[i];

    sort(s.begin(), s.end());
    string ans = "";
    rep (i, 0, n) ans += s[i];
    cout << ans << endl;

    return 0;
}
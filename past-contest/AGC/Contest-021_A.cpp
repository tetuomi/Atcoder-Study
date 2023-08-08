#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    string s;
    cin >> s;
    int n = s.size();

    if (n == 1)
    {
        cout << s << endl;
        return 0;
    }

    int ans = (s[0] - '0' - 1) + 9 * (n - 1);
    int tmp = 0;
    rep (i, 0, n) tmp += s[i] - '0';
    ans = max(ans, tmp);

    cout << ans << endl;

    return 0;
}
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

    bool f[4] = {false};
    for (auto c: s)
    {
        if (c == 'N') f[0] = true;
        if (c == 'W') f[1] = true;
        if (c == 'S') f[2] = true;
        if (c == 'E') f[3] = true;
    }


    string ans = "Yes";
    if ((f[0]^f[2]) == true) ans = "No";
    if ((f[1]^f[3]) == true) ans = "No";

    cout << ans << endl;

    return 0;
}
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

    int ans = 1e7;
    for (auto c : s)
    {
        int cnt = 0;
        rep (i, 0, n)
        {
            if (s[i] == c) continue;
            int j = i;
            while (j < n && s[j] != c) j++;
            cnt = max(cnt, j-i);
            i = j;
        }
        ans = min(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}
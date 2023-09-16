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
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];

    map<char, int> ans;
    rep (j, 0, s[0].size())
    {
        ans[s[0][j]]++;
    }
    rep (i, 1, n)
    {
        map<char, int> cnt;
        rep (j, 0, s[i].size())
        {
            cnt[s[i][j]]++;
        }
        for (char c = 'a'; c <= 'z'; c++)
        {
            ans[c] = min(ans[c], cnt[c]);
        }
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        rep (i, 0, ans[c])
        {
            cout << c;
        }
    }
    cout << endl;

    return 0;
}
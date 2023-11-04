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
    map<int, int> mp;
    rep (i, 0, n)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    int ans = 0;
    for (auto p : mp)
    {
        if (p.first < p.second) ans += p.second - p.first;
        else if (p.first > p.second) ans += p.second;
    }

    cout << ans << endl;


    return 0;
}
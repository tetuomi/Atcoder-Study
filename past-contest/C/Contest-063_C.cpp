#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc063/tasks/arc075_a
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n;i++) cin >> s[i];

    set<int> scores;

    scores.insert(0);
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (const auto score : scores)
        {
            tmp.push_back(score + s[i]);
        }
        for (const auto& t : tmp)
        {
            scores.insert(t);
        }
    }

    for (int ans = 10000;ans > 0;ans--)
    {
        if (ans % 10 == 0) continue;
        auto it = scores.find(ans);
        if (it != scores.end())
        {
            cout << ans << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';

    return 0;
}
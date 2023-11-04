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
    string t;
    cin >> n >> t;
    vector<string> s(n);
    rep (i, 0, n) cin >> s[i];

    int tl = (int)t.size();
    vector<int> front_cnt(tl+1, 0), back_cnt(tl+1, 0);
    rep (i, 0, n)
    {
        int cnt = 0;
        for (auto c: s[i])
        {
            if (cnt >= tl) break;
            if (t[cnt] == c) cnt++;
        }
        front_cnt[cnt]++;

        cnt = 0;
        reverse(s[i].begin(), s[i].end());
        for (auto c: s[i])
        {
            if (tl-(1+cnt) < 0) break;
            if (t[tl-(1+cnt)] == c) cnt++;
        }
        back_cnt[cnt]++;
    }

    vector<int> front_sum(tl+1, 0), back_sum(tl+1, 0);
    front_sum[0] = n, back_sum[0] = n;
    rep (i, 1, tl+1)
    {
        front_sum[i] = front_sum[i-1] - front_cnt[i-1];
        back_sum[i] = back_sum[i-1] - back_cnt[i-1];
    }

    // cout << "cnt" << endl;
    // rep (i, 0, tl+1)
    // {
    //     cout << front_cnt[i] << " " << back_cnt[i] << endl;
    // }

    // cout << "sum" << endl;
    // rep (i, 0, tl+1)
    // {
    //     cout << front_sum[i] << " " << back_sum[i] << endl;
    // }

    ll ans = 0;
    rep (i, 0, tl+1)
    {
        ans += (ll)front_cnt[i] * back_sum[tl-i];
    }

    cout << ans << endl;

    return 0;
}
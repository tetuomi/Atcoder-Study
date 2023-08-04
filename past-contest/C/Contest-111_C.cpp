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
    vector<int> odd_a, even_a;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        if (i % 2 == 0) even_a.push_back(x);
        else odd_a.push_back(x);
    }

    map<int, int> odd_cnt, even_cnt;
    for (int a : odd_a) odd_cnt[a]++;
    for (int a : even_a) even_cnt[a]++;

    int ans = 0;
    pair<int, int> odd_max_kv = {0, 0};
    vector<int> odd_v(1, 0);
    for (auto [k, v] : odd_cnt)
    {
        ans += v;
        if (odd_max_kv.second < v) odd_max_kv = {k, v};
        odd_v.push_back(v);
    }

    pair<int, int> even_max_kv = {0, 0};
    vector<int> even_v(1, 0);    
    for (auto [k, v] : even_cnt)
    {
        ans += v;
        if (even_max_kv.second < v) even_max_kv = {k, v};
        even_v.push_back(v);
    }

    sort(odd_v.begin(), odd_v.end(), greater<int>());
    sort(even_v.begin(), even_v.end(), greater<int>());

    if (odd_max_kv.first == even_max_kv.first)
    {
        ans -= max(even_v[0] + odd_v[1], odd_v[0] + even_v[1]);
    }
    else
    {
        ans -= odd_max_kv.second;
        ans -= even_max_kv.second;
    }

    cout << ans << endl;

    return 0;
}
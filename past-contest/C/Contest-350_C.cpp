


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

    vector<int> a(n), a_id(n);
    rep (i, 0, n) cin >> a[i];
    rep (i, 0, n) a_id[a[i]-1] = i;


    vector<pair<int, int>> ans_vec;
    rep (i, 0, n)
    {
        if (a_id[i] != i)
        {
            ans_vec.push_back({min(a_id[i]+1, i+1), max(a_id[i]+1, i+1)});
            int tmp_a = a[i];
            swap(a[a_id[i]], a[i]);
            a_id[tmp_a - 1] = a_id[i];
            a_id[i] = i;
        }
    }

    cout << ans_vec.size() << endl;
    for (auto v: ans_vec)
    {
        cout << v.first << ' ' << v.second << endl;
    }

    return 0;
}
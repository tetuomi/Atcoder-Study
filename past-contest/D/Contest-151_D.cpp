#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc159/tasks/abc159_d
*/

int main(void)
{
    ios::sync_with_stdio(false);
    // cin.tie(0);
    // cin >> setprecision(12);

    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> cnt(n+1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll all_comb = 0;

    for (auto c : cnt)
    {
        all_comb += c * (c-1)/2;
    }

    for (int i = 0; i < n; i++)
    {
        ll comb = cnt[a[i]] * (cnt[a[i]] - 1) / 2;
        ll comb_without_k = (cnt[a[i]] - 1) * (cnt[a[i]] - 2) / 2;
        cout << all_comb - comb + comb_without_k << endl;
    }

    return 0;
}
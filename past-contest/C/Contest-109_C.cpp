#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc109/tasks/abc109_c

    解法:
    それぞれの地点x_iから初期位置Xを引き、その最小値の約数を計算する。
    求めた約数のうち、全てのx_i - Xに共通する最大の約数を求める。（最大公約数）
    （x_i - Xの最大公約数を求める）
*/

vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    // sort(ret.begin(), ret.end());
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    ll n, x;
    cin >> n >> x;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        v[i] = abs(tmp - x);
    }
    ll min_v = *min_element(v.begin(), v.end());

    auto divs = divisor(min_v);
    ll ans = 1;
    for (auto d : divs)
    {
        bool ok = true;
        for (auto x : v)
        {
            if (x % d != 0) ok = false;
        }
        if (ok) ans = max(ans, d);
    }

    cout << ans << '\n';

    return 0;
}
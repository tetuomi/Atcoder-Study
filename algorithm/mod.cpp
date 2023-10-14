#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using namespace atcoder;

using ll = long long;
using mint = modint998244353;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    mint sum = 0;
    rep (i, 0, 100) sum += i;
    cout << sum.val() << endl;

    mint a = mint{3}.inv(); // xy == 1 (mod 998244353) となるような x を求める
    cout << a.val() << endl;

    return 0;
}
#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

long long gcd_vec(vector<long long> const &A) { // N個の要素に対する最大公約数
    int size = (int)A.size();
    long long ret = A[0];
    for (int i = 1; i < size; i++) {
        ret = gcd(ret, A[i]);
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n;
    cin >> n;
    vector<ll> a(n);
    rep (i, 0, n) cin >> a[i];

    cout << gcd_vec(a) << endl;

    return 0;
}
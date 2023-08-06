#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

bool is_squere(long long N) {
    long long r = (long long)floor(sqrt((long double)N));  // 切り捨てした平方根
    return (r * r) == N;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, d;
    cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d));
    rep (i, 0, n) rep (j, 0, d) cin >> x[i][j];

    int ans = 0;
    rep (i, 0, n) rep (j, i+1, n)
    {
        int dis = 0;
        rep (k, 0, d) dis += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
        if (is_squere(dis)) ans++;
    }

    cout << ans << endl;

    return 0;
}
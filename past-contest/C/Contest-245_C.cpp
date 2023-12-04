#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);

    rep (i, 0, n) cin >> a[i];
    rep (i, 0, n) cin >> b[i];

    vector ans_flag(2, vector<bool>(n, false));
    ans_flag[0][0] = true, ans_flag[1][0] = true;
    rep (i, 1, n)
    {
        // 0: 1つ前にaを選んだか、1: bを選んだか
        if (abs(a[i] - a[i-1]) <= k && ans_flag[0][i-1]) ans_flag[0][i] = true;
        if (abs(a[i] - b[i-1]) <= k && ans_flag[1][i-1]) ans_flag[0][i] = true;
        if (abs(b[i] - a[i-1]) <= k && ans_flag[0][i-1]) ans_flag[1][i] = true;
        if (abs(b[i] - b[i-1]) <= k && ans_flag[1][i-1]) ans_flag[1][i] = true;
    }

    string ans = "Yes";
    if (ans_flag[0][n-1] == false && ans_flag[1][n-1] == false) ans = "No";

    cout << ans << endl;


    return 0;
}
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

    vector<int> a(n+2, 0);
    rep (i, 1, n+1) cin >> a[i];

    int sum = 0;
    rep (i, 1, n+2) sum += abs(a[i] - a[i-1]);

    rep (i, 1, n+1)
    {
        int ans = sum;
        ans -= abs(a[i] - a[i-1]) + abs(a[i+1] - a[i]);
        ans += abs(a[i+1] - a[i-1]);
        cout << ans << endl;
    }


    return 0;
}
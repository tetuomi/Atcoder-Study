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
    vector<int> a(n);
    rep (i, 0, n) cin >> a[i];

    int ans = 0;
    rep (i, 0, n)
    {
        while (a[i] % 2 == 0)
        {
            a[i] /= 2;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
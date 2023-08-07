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
    vector<int> t(n);
    rep (i, 0, n) cin >> t[i];
    int m;
    cin >> m;


    int ans = accumulate(t.begin(), t.end(), 0);
    while(m--)
    {
        int p, x;
        cin >> p >> x;

        cout << ans - t[p-1] + x << endl;
    }

    return 0;
}
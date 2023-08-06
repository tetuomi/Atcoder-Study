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

    set<int> a;
    rep (i, 0, n)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    int ans = 0;
    rep (i, 0, k)
    {
        if (a.find(i) != a.end()) ans++;
        else break;  
    }

    cout << ans << endl;

    return 0;
}
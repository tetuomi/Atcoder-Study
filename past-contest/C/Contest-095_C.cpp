#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int a, b, c;
    cin >> a >> b >> c;
    int x, y;
    cin >> x >> y;

    int ans = a*x + b*y;
    if (x <= y)
    {
        ans = min(ans, 2*c*x + b*(y-x));
        ans = min(ans, 2*c*y);
    }
    else
    {
        ans = min(ans, 2*c*y + a*(x-y));
        ans = min(ans, 2*c*x);
    }

    cout << ans << endl;

    return 0;
}
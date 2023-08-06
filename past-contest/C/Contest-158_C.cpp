#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int a, b;
    cin >> a >> b;
    // int a = 2, b = 2;
    rep (ans, 1, 1e4)
    {
        if ((int)(ans*0.08) == a && (int)(ans*0.1) == b)
        {
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;


    return 0;
}
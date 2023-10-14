#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int w, h, n;
    cin >> w >> h >> n;

    int max_x = 0, max_y = 0, min_x = w, min_y = h;
    rep (i, 0, n)
    {
        int x, y, a;
        cin >> x >> y >> a;
        if (a == 1)
        {
            max_x = max(max_x, x);
        }
        else if (a == 2)
        {
            min_x = min(min_x, x);
        }
        else if (a == 3)
        {
            max_y = max(max_y, y);
        }
        else if (a == 4)
        {
            min_y = min(min_y, y);
        }
    }

    // cout << max_x << ' ' << min_x << ' ' << max_y << ' ' << min_y << endl;

    if ((max_x - min_x) >= 0 || (max_y - min_y) >= 0)
        cout << 0 << endl;
    else
        cout << abs((max_x - min_x) * (max_y - min_y)) << endl;


    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int small = min({x1, x2, x3});
        int big = max({x1, x2, x3});
        int medium = x1 + x2 + x3 - (big + small);

        if (small == medium && medium == big)
        {
            cout << 0 << endl;
        }
        else if ((small == medium && medium < big) || (small < medium && medium == big))
        {
            if ((big - small) % 6 == 0)
            {
                cout << (big - small) / 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if ((medium - small) % 2 == 0)
            {
                int cnt = (medium - small) / 2;
                int diff = (big - (small + cnt*4));
                if (diff % 6 == 0)
                {
                    cout << diff / 3 + cnt << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }

    }



    return 0;
}
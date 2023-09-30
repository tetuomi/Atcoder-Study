#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, a, b, c, d;
    string s;
    cin >> n >> a >> b >> c >> d >> s;

    if (d < c)
    {
        bool ok = false;
        rep (i, b-1, d)
        {
            if (i-1 < 0 || i+1 >= n) continue;
            if (s[i-1] == '.' && s[i] == '.' && s[i+1] == '.')
            {
                ok = true;
                break;
            }
        }
        if (ok == false)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    vector<bool> can_reach_A(n, false), can_reach_B(n, false);
    can_reach_A[a - 1] = true;
    can_reach_B[b - 1] = true;

    rep (i, 0, n)
    {
        if (can_reach_A[i] == false) continue;
        if (i+1 < n && s[i+1] == '.')
        {
            can_reach_A[i+1] = true;
        }
        if (i+2 < n && s[i+2] == '.')
        {
            can_reach_A[i+2] = true;
        }
    }

    rep (i, 0, n)
    {
        if (can_reach_B[i] == false) continue;
        if (i+1 < n && s[i+1] == '.')
        {
            can_reach_B[i+1] = true;
        }
        if (i+2 < n && s[i+2] == '.')
        {
            can_reach_B[i+2] = true;
        }
    }

    if (can_reach_A[c-1] && can_reach_B[d-1])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
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

    int cnt[200] = {0};
    for (int bit = 1; bit < (1 << min(n, 10)); bit++)
    {
        int sum = 0;
        for (int i = 0; i < min(n, 10); i++)
        {
            if (bit & (1 << i)) sum += a[i] % 200;
        }
        sum %= 200;
        if (cnt[sum] == 0) cnt[sum] = bit;
        else
        {
            cout << "Yes" << endl;
            vector<int> x, y;
            for (int i = 0; i < min(n, 10); i++)
            {
                if (cnt[sum] & (1 << i)) x.push_back(i+1);
                if (bit & (1 << i)) y.push_back(i+1);
            }
            cout << x.size() << endl;
            for (auto p : x) cout << p << endl;
            cout << y.size() << endl;
            for (auto p : y) cout << p << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
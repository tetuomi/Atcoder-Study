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

    vector<pair<int, int>> ba(n);// (b, a)
    rep (i, 0, n) cin >> ba[i].second >> ba[i].first;

    sort(ba.begin(), ba.end());
    ll now = 0LL;
    string ans = "Yes";
    rep (i, 0, n)
    {
        now += ba[i].second;
        if (ba[i].first < now) {
            ans = "No";
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
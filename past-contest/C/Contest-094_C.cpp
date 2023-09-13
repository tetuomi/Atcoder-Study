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

    vector<int> x(n), sort_x(n);
    rep (i, 0, n) cin >> x[i], sort_x[i] = x[i];

    sort(sort_x.begin(), sort_x.end());
    int cand1 = sort_x[n/2-1];
    int cand2 = sort_x[n/2];

    rep (i, 0, n) {
        if (x[i] <= cand1) cout << cand2 << endl;
        else cout << cand1 << endl;
    }


    return 0;
}
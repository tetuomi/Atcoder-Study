#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;
    ll cnt = 0;
    vector<bool> seen(n, false);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == i+1) cnt++, seen[i] = true;
    }
    ans += cnt * (cnt-1)/2;
    // cout << ans << endl;

    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (seen[i]==false && a[a[i]-1] == i+1) cnt++;
    }
    ans += cnt/2;

    cout << ans << '\n';

    return 0;
}
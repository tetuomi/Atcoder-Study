#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/agc013/tasks/agc013_a
*/
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int tmp_i = 0;
    while (tmp_i + 1 <  n && a[tmp_i + 1] == a[tmp_i]) tmp_i++;
    bool increasing = a[tmp_i+1] > a[tmp_i];
    int ans = 1;

    for (int i = 1; i < n; i++)
    {
        if (increasing && a[i] < a[i-1])
        {
            ans++;
            int tmp_i = i;
            while (tmp_i + 1 <  n && a[tmp_i + 1] == a[tmp_i]) tmp_i++;
            increasing = a[tmp_i+1] > a[tmp_i];
        }
        if (increasing == false && a[i] > a[i-1])
        {
            ans++;
            int tmp_i = i;
            while (tmp_i + 1 <  n && a[tmp_i + 1] == a[tmp_i]) tmp_i++;
            increasing = a[tmp_i+1] > a[tmp_i];
        }
    }

    cout << ans << '\n';

    return 0;
}
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

    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] < a[i+1]) cnt++;
    }

    cout << cnt*(cnt-1)/2 << '\n';

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n,k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    sort(h.begin(), h.end());

    int ans = 1e9;
    for (int i = 0; i+k-1 < n; i++)
    {
        ans = min(ans, h[i+k-1]-h[i]);
    }

    cout << ans << endl;

    return 0;
}

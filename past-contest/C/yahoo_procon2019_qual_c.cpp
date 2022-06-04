#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    ll k, a, b;
    cin >> k >> a >> b;

    if (b - a <= 2)
    {
        cout << k + 1 << '\n';
        return 0;
    }
    ll reserve_cnt = max(k - a + 1, 0LL);
    ll ans = k-a+1 >= 0? a : k+1;
    
    ans += (reserve_cnt/2)*(b-a);
    ans += reserve_cnt%2;

    cout << ans << '\n'; 

    return 0;
}
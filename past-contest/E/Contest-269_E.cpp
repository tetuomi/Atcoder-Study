#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<ll> que;

    que.insert(0);

    int cnt = 0;
    ll ans = 0;
    while (!que.empty())
    {
        ll money = *que.begin();
        que.erase(money);
        // cout << money << endl;
        for (int i = 0; i < n; i++)
        {
            que.insert(money + a[i]);
        }

        if (cnt == k)
        {
            ans = money;
            break;
        }
        cnt++;
    }

    cout << ans << endl;

    return 0;
}

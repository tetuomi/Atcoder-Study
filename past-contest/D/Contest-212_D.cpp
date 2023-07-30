#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int q;
    cin >> q;

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll sum = 0;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            pq.push(x - sum);
        }
        else if (type == 2)
        {
            int x;
            cin >> x;

            sum += x;
        }
        else
        {
            ll ans = pq.top() + sum; pq.pop();
            cout << ans << endl;
        }
    }
    

    return 0;
}
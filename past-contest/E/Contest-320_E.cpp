#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

struct DataType
{
    ll t;
    ll w;
    ll s;
};


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, m;
    cin >> n >> m;

    vector<DataType> query(m);
    rep (i, 0, m) cin >> query[i].t >> query[i].w >> query[i].s;

    priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<tuple<ll, int, int>>> pq; // {time, type, id}
    rep (i, 0, n) pq.push({0, 0, i});
    rep (i, 0, m) pq.push({query[i].t, 1, i});

    set<int> order;
    vector<ll> ans(n, 0);
    while (true)
    {
        auto [t, type, id] = pq.top(); pq.pop();

        if (type == 0) // 人が入ってくる
        {
            order.insert(id);
        }
        else // クエリが来る
        {
            if (order.empty() == false)
            {
                int x = *order.begin();
                order.erase(x);
                ans[x] += query[id].w;
                pq.push({t + query[id].s, 0, x});
            }
            if (id == m-1) break;
        }
    }

    for (auto a: ans) cout << a << endl;

    return 0;
}
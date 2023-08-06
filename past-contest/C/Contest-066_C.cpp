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
    vector<int> a(n);
    rep (i, 0, n) cin >> a[i];

    deque<int> dq;
    rep (i, 0, n) {
        if (i % 2 == 0) dq.push_back(a[i]);
        else dq.push_front(a[i]);
    }

    if (n % 2 == 0)
    {
        for (auto v : dq)
        {
            cout << v << endl;
        }
    }
    else
    {
        for (auto itr = dq.rbegin(); itr != dq.rend(); itr++)
        {
            cout << *itr << endl;
        }
    }
    return 0;
}
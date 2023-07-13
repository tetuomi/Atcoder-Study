#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

struct DataType
{
    ll id;
    ll a;
    ll b;
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll n;
    cin >> n;
    vector<DataType> ab(n);
    for (int i = 0;i < n;i++) cin >> ab[i].a >> ab[i].b, ab[i].id = i;

    sort(ab.begin(), ab.end(), [](auto x, auto y) {
        ll tmp1 = x.a * (y.a + y.b);
        ll tmp2 = y.a * (x.a + x.b);
        if (tmp1 == tmp2) return x.id < y.id;
        else return tmp1 > tmp2;
    });

    for (auto v: ab)
    {
        cout << v.id+1 << endl;
    }

    return 0;
}
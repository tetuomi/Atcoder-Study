#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

struct DataType
{
    int id;
    int p;
    string s;
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n;
    cin >> n;
    vector<DataType> sp(n);
    rep (i, 0, n) cin >> sp[i].s >> sp[i].p, sp[i].id = i;

    sort(sp.begin(), sp.end(), [](auto a, auto b)
        {if (a.s != b.s) return a.s < b.s;
        else return a.p > b.p;});

    for (auto v: sp)
    {
        cout << v.id+1 << endl;
    }

    return 0;
}
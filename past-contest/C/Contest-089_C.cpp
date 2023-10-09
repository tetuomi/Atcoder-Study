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
    map<char, ll> cnt;
    rep(i, 0, n) {
        string s;
        cin >> s;
        cnt[s[0]]++;
    }

    ll ans = 0;
    vector<vector<int>> comb{{0, 1, 2},
                             {0, 1, 3},
                             {0, 1, 4},
                             {0, 2, 3},
                             {0, 2, 4},
                             {0, 3, 4},
                             {1, 2, 3},
                             {1, 2, 4},
                             {1, 3, 4},
                             {2, 3, 4}};

    char march[5] = {'M', 'A', 'R', 'C', 'H'};
    for (auto v: comb)
    {
        ans += cnt[march[v[0]]] * cnt[march[v[1]]] * cnt[march[v[2]]];
    }

    cout << ans << endl;

    return 0;
}
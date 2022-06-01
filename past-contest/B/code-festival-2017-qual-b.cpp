#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/code-festival-2017-qualb/tasks/code_festival_2017_qualb_b

    解法:
    重複あり順序付き集合をもちいて、問題案を作れるかどうか判定

    想定解:
    「難易度が x の問題案の個数」が
    「問題セットに必要な難易度 x の問題案の個数」以上であれば問題セットを
    完成させることができる。
    mapのほうが楽
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    int n,m;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n;i++) cin >> d[i];
    cin >> m;
    vector<int> t(m);
    for (int i = 0; i < m; i++) cin >> t[i];

    multiset<int> draft_problem;
    for (auto _d : d) draft_problem.insert(_d);
    // for (auto p : draft_problem) cout << p << endl;
    for (auto _t : t)
    {
        if (draft_problem.find(_t) == draft_problem.end())
        {
            cout << "NO" << '\n';
            return 0;
        }
        draft_problem.erase(draft_problem.find(_t));
    }
    cout << "YES" << '\n';
    return 0;

    return 0;
}
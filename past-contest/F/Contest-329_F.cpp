#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, q;
    cin >> n >> q;
    vector a_cnt(n, set<int>());
    rep (i, 0, n)
    {
        int c;
        cin >> c;
        a_cnt[i].insert(c);
    }

    while(q--)
    {
        int q_a, q_b;
        cin >> q_a >> q_b;
        q_a--; q_b--;

        int cnt = 0;
        if (a_cnt[q_a].size() < a_cnt[q_b].size())
        {
            for (auto itr = a_cnt[q_a].begin(); itr != a_cnt[q_a].end(); itr++)
            {
                if (a_cnt[q_b].find(*itr) == a_cnt[q_b].end())
                {
                    a_cnt[q_b].insert(*itr);
                }
            }
            cnt += a_cnt[q_b].size();
            a_cnt[q_a] = set<int>();
        }
        else
        {
            for (auto itr = a_cnt[q_b].begin(); itr != a_cnt[q_b].end(); itr++)
            {
                if (a_cnt[q_a].find(*itr) == a_cnt[q_a].end())
                {
                    a_cnt[q_a].insert(*itr);
                }
            }
            cnt += a_cnt[q_a].size();
            a_cnt[q_b] = set<int>();
            swap(a_cnt[q_a], a_cnt[q_b]);
        }
        cout << cnt << endl;
    }

    return 0;
}
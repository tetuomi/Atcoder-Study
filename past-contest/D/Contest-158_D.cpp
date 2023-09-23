#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    string s;
    cin >> s;
    int q;
    cin >> q;

    deque<char> deq;
    rep (i, 0, s.size()) deq.push_back(s[i]);

    bool is_reversed = false;
    while(q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            is_reversed ^= true;
        }
        else
        {
            int f;
            char c;
            cin >> f >> c;

            if (f == 1)
            {
                if (is_reversed == true) deq.push_back(c);
                else deq.push_front(c);
            }
            else
            {
                if (is_reversed == true) deq.push_front(c);
                else deq.push_back(c);
            }
        }
    }

    if (is_reversed == true) reverse(deq.begin(), deq.end());
    for (auto x : deq) cout << x;
    cout << endl;

    return 0;
}
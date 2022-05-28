#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    cin >> setprecision(12);

    ll n;
    cin >> n;

    multiset<int> s;
    for (int i = 0; i < n;i++)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        else if (q == 2)
        {
            int x, num;
            cin >> x >> num;
            while (num-- && s.find(x) != s.end())
            {
                s.erase(s.find(x));
            }
        }
        else
        {
            cout << *s.rbegin() - *s.begin() << '\n';
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc069/tasks/arc080_a
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int four_cnt = 0, two_cnt = 0;
    for (auto v : a)
    {
        if (v % 4 == 0)
        {
            four_cnt++;
        }
        else if (v % 2 == 0)
        {
            two_cnt++;
        }
    }

    int no_cnt = n - four_cnt - two_cnt;

    if (n % 2 == 1 && four_cnt + 1 >= no_cnt && two_cnt == 0)
    {
        cout << "Yes" << '\n';
    }
    else if (four_cnt >= no_cnt)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }

    return 0;
}
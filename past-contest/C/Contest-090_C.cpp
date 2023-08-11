#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll n, m;
    cin >> n >> m;

    // 裏の数を数える
    // 隣接が奇数なら表 ，偶数なら裏
    // 四隅 1 or 3
    // 端 2(n or m == 1) or 5(それ以外)
    // 真ん中 8

    if (n == 1 && m == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 1)
    {
        cout << m-2 << endl;
    }
    else if (m == 1)
    {
        cout << n-2 << endl;
    }
    else
    {
        cout << (n-2)*(m-2) << endl;
    }


    return 0;
}
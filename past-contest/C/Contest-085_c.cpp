#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc085/tasks/abc085_c

    解法: 
    10000*x + 5000*y + 1000*z == moneyとなる
    最小のx+y+zを求め、そこから枚数がnになるように足していく。

    想定解:
    x, yについて全探索し、O(n^2)で求める。
    x, yを求めると、z == n - (x + y)となる。 
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    int n, money;
    cin >> n >> money;

    int x = 0, y = 0, z = 0;
    x = money / 10000;
    y = (money % 10000) / 5000;
    z = (money % 5000) / 1000;

    while (true)
    {
        if (x > 0 && n - (x + y + z) >= 9)
        {
            x--;
            z += 10;
        }
        else if (y > 0 && n - (x + y + z) >= 4)
        {
            y--;
            z += 5;
        }
        else if (x > 0 && n - (x + y + z) >= 1)
        {
            x--;
            y += 2;
        }
        else
        {
            break;
        }
    }

    if (n == x + y + z)
    {
        cout << x << ' ' << y << ' ' << z << '\n';
    }
    else
    {
        cout << "-1 -1 -1\n";
    }


    return 0;
}
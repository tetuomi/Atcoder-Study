#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc131/tasks/abc131_c

    解法:
    cでもdでも割り切れない　＝　全体　－　cかdで割り切れる
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;


    ll c_div_num = (b/c - a/c) + (a%c==0);
    ll d_div_num = (b/d - a/d) + (a%d==0);
    
    ll least_commom_multiple = lcm(c, d);
    ll cd_div_num = (b/least_commom_multiple
                     - a/least_commom_multiple)
                     + (a%least_commom_multiple==0);
    ll ans = (b-a+1) - (c_div_num + d_div_num - cd_div_num);
    cout << ans << '\n';

    return 0;
}
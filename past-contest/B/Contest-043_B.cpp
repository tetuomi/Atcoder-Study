#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc043/tasks/abc043_b

    解法: 
*/

int main(void)
{
    cin >> setprecision(12);

    string s;
    cin >> s;

    vector<char> ans;

    for (auto c: s)
    {
        if (c == '0') ans.push_back('0');
        else if (c == '1') ans.push_back('1');
        else if (ans.size() != 0) ans.pop_back();
    }

    for (auto c: ans) cout << c;
    cout << '\n';

    return 0;
}

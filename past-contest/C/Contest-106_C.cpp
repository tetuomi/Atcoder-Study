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
    ll k;
    cin >> k;

    int index = 0;
    while (index < s.size() && s[index] == '1') index++;

    if (k <= index) cout << 1 << endl;
    else cout << s[index] << endl;

    return 0;
}
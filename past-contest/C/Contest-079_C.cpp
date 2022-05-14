#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    cin >> setprecision(12);

    string s;
    cin >> s;

    for (int bit = 0; bit < (1 << 3); bit++)
    {
        int tmp = s[0] - '0';
        string ans = to_string(s[0] - '0');
        for (int i = 0; i < 3;i++)
        {
            if (bit & (1 << i))
            {
                tmp += s[i+1] - '0';
                ans += "+" + to_string(s[i+1] - '0');
            }
            else
            {
                tmp -= s[i+1] - '0';
                ans += "-" + to_string(s[i+1] - '0'); 
            }
        }
        ans += "=7";
        if (tmp == 7)
        {
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}

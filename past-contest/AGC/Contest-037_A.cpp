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
    int n = s.size();

    string prev_s = "";
    int ans = 0;
    rep (i, 0, n)
    {
        // cout << i << ' ' << prev_s << endl;
        if (prev_s == string{s[i]})
        {
            if (i+1 < n){
                prev_s = string{s[i]} + string{s[i+1]};
                ans++;
                i++;
            }
        }
        else
        {
            prev_s = s[i];
            ans++;
        }
    }

    cout << ans << endl;



    return 0;
}
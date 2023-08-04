#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;


map<ll, ll> ans;
void solve(ll a, ll n)
{
    if (ans.find(n) != ans.end()) return ans[n];
    if (n >= a && n % a == 0) return 1 + solve(a, n/a);
    if (n >= 10 && n % 10 != 0)
    {
        string tmp = to_string(n);
        string num = "";
        for (int i = 1; i < tmp.size(); i++) num += tmp[i];
        num += tmp[0];
        long long x = stoll(num);
        
        return 1 + solve(a, x);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll a, n;
    cin >> a >> n;

    cout << solve(a, n) << endl;

    return 0;
}
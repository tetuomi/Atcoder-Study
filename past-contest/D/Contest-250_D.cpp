#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = unsigned long long;

vector<ll> Eratosthenes(int N)
{
    std::vector<bool> is_prime(N + 1);
    for(int i = 0; i <= N; i++)
    {
        is_prime[i] = true;
    }
    std::vector<ll> P;
    for(int i = 2; i <= N; i++)
    {
        if(is_prime[ i ])
        {
            for(int j = 2 * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
            P.emplace_back(i);
        }
    }
    return P;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll n;
    cin >> n;
    vector<ll> p = Eratosthenes(1e6);
    // cout << p.back() << endl;

    int ans = 0;
    rep (i, 0, p.size())
    {
        if (p[i]*p[i]*p[i]*p[i] > n) break;
        int ok = i, ng = p.size()-1;
        int mid;
        while (ng-ok > 1)
        {
            mid = (ok+ng)/2;
            if (p[i]*p[mid]*p[mid]*p[mid] <= n) ok = mid;
            else ng = mid;
        }
        ans += ok-i;
        // cout << p[i] << " "<< p[ok] <<' ' << p[mid]<<' '<<p[ng] << endl;
    }

    cout << ans << endl;

    return 0;
}
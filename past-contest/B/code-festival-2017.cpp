#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    
    ll ans = pow(3, n);

    int ng_num = 1;
    for (auto v : a)
    {
        if (v % 2 == 0)
        {
            ng_num *= 2;
        }
    }
    cout << ans - ng_num << endl;
    
    return 0;
}

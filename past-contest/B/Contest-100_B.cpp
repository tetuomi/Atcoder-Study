#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n, d;
    cin >> d >> n;

    cout << setprecision(7);
    
    if (n == 100) cout << pow(100, d) * n + pow(100, d) << endl;
    else cout << pow(100, d) * n << endl;
    
    return 0;
}

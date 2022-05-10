#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int x;
    cin >> x;

    vector<bool> dp(x + 110, false);

    dp[0] = true;
    for (int i = 1;i <= x;i++)
    {
        if (!dp[i] & i-100 >= 0) dp[i] = dp[i-100];
        if (!dp[i] & i-101 >= 0) dp[i] = dp[i-101];
        if (!dp[i] & i-102 >= 0) dp[i] = dp[i-102];
        if (!dp[i] & i-103 >= 0) dp[i] = dp[i-103];
        if (!dp[i] & i-104 >= 0) dp[i] = dp[i-104];
        if (!dp[i] & i-105 >= 0) dp[i] = dp[i-105];
    }

    cout << dp[x] << endl;
    
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<vector<int>> dp(n + 1,vector<int>(3));
  vector<vector<int>> a(n,vector<int>(3));
  for(int i = 0;i < n;i++){
    for(int j = 0;j < 3;j++){
      cin >> a[i][j];
    }
  }

  for(int i = 0;i < n;i++){
    for(int j = 0;j < 3;j++){
      for(int k = 0;k < 3;k++){
        if(j == k) continue;
        dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + a[i][k]);
      }
    }
  }

  cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
  return 0;
}

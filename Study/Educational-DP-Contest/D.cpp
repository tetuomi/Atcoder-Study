#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int n,w;
  cin >> n >> w;

  vector<int> W(n);
  vector<long> V(n);
  for(int i = 0;i < n;i++) cin >> W[i] >> V[i];

  vector<vector<long long>> dp(n + 1,vector<long long>(w + 1));

  for(int i = 0; i < n;i++){
    for(int j = 0;j <= w;j++){
      if(j - W[i] >= 0){
        dp[i + 1][j] = max(
                           dp[i + 1][j],
                           dp[i][j - W[i]] + V[i]
                           );
      }
      dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
    }
  }

  cout << dp[n][w] << endl;
  
  return 0;
}

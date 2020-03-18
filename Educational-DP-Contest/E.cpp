#include <iostream>
#include <vector>
#include <algorithm>

#define INF 1001001001

using namespace std;

int main(void) {
  int n,w;
  cin >> n >> w;
  vector<long> W(n);
  vector<int> V(n);

  for(int i = 0;i < n;i++){
    cin >> W[i] >> V[i];
  }
  vector<vector<long>> dp(n + 1,vector<long>(100100,INF));
  dp[0][0] = 0;
  for(int i = 0;i < n;i++){
    for(int j = 0;j < 100100;j++){
      if(j - V[i] >= 0){
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - V[i]] + W[i]);
      }
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
    }
  }
  for(int i = 100001;i > 0;i--){
    if(dp[n][i] <= w){
      cout << i << endl;
      break;
    }
  }
  
  return 0;
}

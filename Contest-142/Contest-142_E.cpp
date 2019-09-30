#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int n,m;
  cin >> n >> m;
  vector<vector<int>> c(m + 10,vector<int>(m));

  vector<int> a(m);
  vector<int> b(m);
  for(int i = 0;i < m;i++){
    cin >> a[i] >> b[i];
    for(int j = 0;j < b[i];j++){
      cin >> c[i][j];
    }
  }

  //vector<vector<int>> dp(m + 10,vector<int>(n + 10,100100));
  vector<int> dp(n + 10,100100);
  for(int i = 0;i < m;i++){
    for(int j = 0;j < b[i];j++){
      dp[c[i][j]] = min(
                        dp[c[i][j]],
                        a[i]
                        );
    }
  }
  bool flag = true;
  long ans = 0;
  for(int i = 0;i < n;i++){
    if(dp[i + 1] > 100000) flag = false;
    ans += dp[i + 1]; 
  }

  if(flag) cout << ans << endl;
  else cout << "-1" << endl;
  return 0;
}

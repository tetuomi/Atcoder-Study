#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define INF 1000000000

using namespace std;

int main(void) {
  int n,k;
  cin >> n >> k;

  vector<int> h(n);
  vector<long> dp(n,INF);

  for(int i = 0;i < n;i++)
    cin >> h[i];

  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  for(int i = 2;i < n;i++){
    for(int j = 1;j <= k;j++){
      if(i - j >= 0){
        dp[i] = min(
                    dp[i],
                    dp[i - j] + abs(h[i] - h[i - j])
                    );
      }
    }
  }
  
  cout << dp[n -1] << endl;
  return 0;
}

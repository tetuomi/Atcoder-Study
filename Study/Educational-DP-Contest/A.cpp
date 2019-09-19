#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define INF 100000000

using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<int> h(n);
  vector<long> dp(n,INF);

  for(int i = 0;i < n;i++)
    cin >> h[i];

  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  for(int i = 2;i < n;i++){
    dp[i] = min(
                dp[i - 2] + abs(h[i] - h[i - 2]),
                dp[i - 1] + abs(h[i] - h[i - 1])
                );
  }
  
  cout << dp[n -1] << endl;
  return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
  https://atcoder.jp/contests/dp/tasks/dp_f
*/

int main(void) {
  string s,t;
  cin >> s >> t;

  vector<vector<int>> dp(3010, vector<int>(3010, 0));

  dp[0][0] = 0;
  for (int i = 0;i < (int)s.size();i++)
  {
      for (int j = 0;j < (int)t.size();j++)
      {
          if (s[i] == t[j]) dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+1);
          dp[i+1][j+1] = max(dp[i+1][j+1], dp[i+1][j]);
          dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]);
      }
      cout << "    ";
      for (auto v : t) cout << v << ' ';
      cout << endl;
      for (int x = 0;x <= (int)s.size();x++)
      {
          if (x == 0) cout << "  ";
          else cout << s[x-1] << ' ';
          for (int y = 0;y <= (int)t.size();y++)
          {
              cout << dp[x][y] << ' ';
          }
          cout << "\n";
      }
      cout << "\n\n\n";
  }
  
  // 復元
  string res = "";
  int i = (int)s.size(), j = (int)t.size();
  while (i > 0 && j > 0)
  {
      // (i-1, j) -> (i, j) と更新されていた場合
      if (dp[i][j] == dp[i-1][j]) {
          --i; // DP の遷移を遡る
      }

      // (i, j-1) -> (i, j) と更新されていた場合
      else if (dp[i][j] == dp[i][j-1]) {
          --j; // DP の遷移を遡る
      }

      // (i-1, j-1) -> (i, j) と更新されていた場合
      else {
          res = s[i-1] + res; // このとき s[i-1] == t[j-1] なので、t[j-1] + res でも OK
          --i, --j; // DP の遷移を遡る
      }
  }
  cout << res << endl;
  return 0;
}


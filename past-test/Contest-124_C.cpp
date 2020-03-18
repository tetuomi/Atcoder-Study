#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
**
**  17分02秒
**
*/


int main(void) {
  string s;
  cin >> s;
  int ans = 0,ans2 = 0;
  int n = s.size();

  if (n == 1) cout << 0 << endl;
  else
  {
    for (int i = 1;i < n;i++)
      {
        if (s[0] == '0')
          {
            if (s[0] + (i % 2) != s[i])
              {
                ans++;
              }
          }
        else
          {
            if (s[0] - (i % 2) != s[i])
              {
                ans++;
              }
          }
      }

    for (int i = n - 2,j = 1;i >= 0;i--,j++)
      {
        if (s[n-1] == '0')
          {
            if (s[n-1] + (j % 2) != s[i])
              {
                ans2++;
              }
          }
        else
          {
            if (s[n-1] - (j % 2) != s[i])
              {
                ans2++;
              }
          }
      }
    cout << min(ans,ans2) << endl;
  }
  return 0;
}

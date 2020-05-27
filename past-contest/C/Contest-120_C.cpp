#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
/*
**
**  33分11秒
**
*/


using namespace std;

int main(void) {
  string s;
  cin >> s;
  
  if (s.size() == 1)
  {
    cout << 0 << endl;
  }
  else
  {
    int ans = 0;
    string tmp{s[0]};
    for (int i = 1;i < s.size();)
    {
      if (tmp[0] != s[i])
      {
        s = s.erase(i-1, 2);
        i = i > 2?i-1:1;
        tmp[0] = s[i > 2?i - 2:0];
        ans+=2;
      }
      else
      {
        tmp[0] = s[i];
        i++;
      }
    }
    cout << ans << endl;
  }
  

  return 0;
}

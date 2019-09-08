#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  string s,t;
  cin >> s >> t;

  int ans = 0;

  for(int i = 0;i < 3;i++){
    if(s[i] == t[i]) ans++;
  }

  cout << ans << endl;
  return 0;
}

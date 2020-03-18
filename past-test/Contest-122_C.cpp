#include <iostream>
#include <vector>
#include <algorithm>

/*
**
**  30分21秒
**
*/



using namespace std;

int main(void) {
  int n,q,l,r;
  cin >> n >> q;
  string s;
  cin >> s;

  int ans[100000] = {0};
  for (int i = 0;i < n - 1;i++)
  {
    if (s[i] == 'A' && s[i + 1] == 'C')
    {
      ans[i + 1] = ans[i] + 1;
    }
    else
    {
      ans[i + 1] = ans[i];
    }
  }

  for (int i = 0; i < q;i++)
  {
    cin >> l >> r;
    l--;r--;
    cout << ans[r] - ans[l] << endl;
  }
  return 0;
}

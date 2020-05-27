#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
/*
**
** 16分27秒
**
*/


using namespace std;

int pow(int k)
{
  int ans = 1;
  for (int i = 0;i < k;i++)
  {
    ans *= 2;
  }
  return ans;
}

int main(void) {
  int n,k;
  cin >> n >> k;

  double ans = 0;

  int tmp = 1,count = 0;
  for (int i = 1;i <= n;i++,count = 0)
  {
    for (int j = i;j < k;j *= 2,count++)
    {
      
    }
    tmp = pow(count) * n;
    ans += 1 / (double)tmp;
  }
  cout << fixed<< setprecision(11);
  cout << ans << endl;
  
  
  return 0;
}

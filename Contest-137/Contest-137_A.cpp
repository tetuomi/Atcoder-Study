#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int a,b;

  cin >> a >> b;

  int ans = a + b;
  if(ans < a - b) ans = a - b;
  if(ans < a * b) ans = a * b;

  cout << ans << endl;
  
  return 0;
}

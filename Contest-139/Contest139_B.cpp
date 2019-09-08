#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int ans = 1;
  int a,b;

  cin >> a >> b;

  if(b == 1) cout << 0 << endl;
  else {
  int i;
  for(i = 1;a + (a - 1) * (i - 1) < b;i++){}

  cout << i << endl;
  }
  return 0;
}

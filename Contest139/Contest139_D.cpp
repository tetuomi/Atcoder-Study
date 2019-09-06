#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  long n;

  cin >> n;
  /*
  vectr<int> a(n);
  for(int i = 0;i < n;i++)
    a[i] = i + 1;
  */
  cout << (n - 1) * n / 2 << endl;
  
  return 0;
}

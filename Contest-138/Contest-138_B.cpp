#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int n;
  cin >> n;

  double buff;

  vector<double> a;

  for(int i = 0l;i < n;i++){
    cin >> buff;
    a.push_back(buff);
  }

  double ans = 0;

  for(int i = 0;i < n;i++){
    ans += 1 / a[i];
  }

  cout << 1 / ans << endl;
  
  return 0;
}

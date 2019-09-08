#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int n,buff;
  vector<int> h;

  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> buff;
    h.push_back(buff);
  }

  int max = 0,_max = 0;

  for(int i = 0;i < n - 1;i++){
    if(h[i] >= h[i + 1]) _max++;
    else _max = 0;
    if(max < _max) max = _max;
  }

  cout << max << endl;

  return 0;
}

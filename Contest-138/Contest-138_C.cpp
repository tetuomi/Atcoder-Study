#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int n;

  cin >> n;
  double buff;
  vector<double> v;

  for(int i = 0;i < n;i++){
    cin >> buff;
    v.push_back(buff);
  }

  sort(v.begin(),v.end());

  double box = (v[0] + v[1])/2;
  
  for(int i = 2;i < n;i++){
    box = (box + v[i]) / 2;
  }

  cout << box;
  
  return 0;
}

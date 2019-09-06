#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
  int n,buff;
  vector<int> Vp;

  cin >> n;

  for(int i = 0;i < n;i++){
    cin >> buff;
    Vp.push_back(buff);
  }

  int count = 0;
  for(int i = 0;i < n;i++){
    if(i + 1!= Vp[i]) count++;
  }

  if(count <= 2) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int x,k;

  cin >> k >> x;

  if(k == 1) cout << x << endl;
  else{
    for(int i = x - (k - 1);i != x + k;i++){
      cout << i << ' ';
    }
  }
  cout << endl;
  
  return 0;
}

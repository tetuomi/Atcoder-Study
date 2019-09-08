#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int l,f;

  cin >> l >> f;

  long count = 0;
  for(int i = l;i <= f;i++){
    count ++;
    for(int j = i + 1;j <= f;j++){
      if((j % i) == (j ^ i)) count++;
      if(count > 1000000007) count %= 1000000007;
    }
  }
  cout << count;
  
  return 0;
}

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int N;

  int i,j;

  cin >> N;
  int keta = 0;
  for(i = N;i > 0;i /= 10){
    keta++;
  }

  int output = 0;
  for(i = 1,j = 1;i < keta;i++){
    if(i%2){
      output += 9 * j;
      j *= 100;
    }
  }

  if(keta%2){
    cout << (output + (N - j + 1)) << endl;
  }
  else {
     cout << output << endl;
  }
  return 0;
}

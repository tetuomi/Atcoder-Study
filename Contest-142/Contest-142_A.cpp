#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(void) {
  float n,odd = 0;
  cin >> n;

  for(int i = 1;i <= (int)n;i++){
    if(i % 2) odd++;
  }

  cout << setprecision(6);
  cout << odd / n;
  
  return 0;
}

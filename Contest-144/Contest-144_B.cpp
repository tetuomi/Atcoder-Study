
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  bool flag = false;
  for(int i = 1;i < 10;i++){
    if((n / i) < 10 && n >= i)
      {flag = true;
        cout << i;
      }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}

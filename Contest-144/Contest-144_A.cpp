#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int m,n;
  cin >> m >> n;
  if(m > 9 || n > 9) cout << "-1" << endl;
  else {
    cout << m * n << endl;
  }

  return 0;
}

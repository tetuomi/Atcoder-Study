#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  long long n,a,b,c,d,e;
  cin >> n >> a >> b >> c >> d >> e;
  cout << max({(n-1)/a,(n-1)/b,(n-1)/c,(n-1)/d,(n-1)/e})+5 << endl;

  return 0;
}

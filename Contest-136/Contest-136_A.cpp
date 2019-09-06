#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int a,b,c;

  cin >> a >> b >> c;

  cout << (((c - (a - b)) > 0)? c - (a - b) : 0) << endl;
    return 0;
}

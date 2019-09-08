#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int n;
  cin >> n;

  string s;
  cin >> s;

  cout << ((n >= 3200)? s : "red");

  
  return 0;
}

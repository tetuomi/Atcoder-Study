#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  long a,b;

  cin >> a >> b;
  
  if((a + b) % 2){
    cout << "IMPOSSIBLE" << endl;
  }

  else {
    cout << (a + b)/2 << endl;
  }
    return 0;
}

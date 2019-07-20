#include <iostream>

using namespace std;

int main(void){

  int tree,visible,person = 0;

  cin >> tree >> visible;

  while(tree > 0)
  {
    tree -= visible * 2 + 1;
    person++;
  }

  cout << person << endl;

  return 0;    
}

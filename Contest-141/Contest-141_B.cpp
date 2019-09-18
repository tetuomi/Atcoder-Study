#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  string s;
  cin >> s;

  bool flag = true;
  for(int i = 0;i < s.length();i++){
    if(!(i % 2) && s[i] == 'L') flag = false;
    else if(i % 2 && s[i] == 'R') flag = false;
  }
  cout << (flag ? "Yes" : "No") << endl;
  return 0;    
}

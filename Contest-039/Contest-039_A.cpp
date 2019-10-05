#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  string s,_s;
  long long k;
  cin >> s >> k;

  long long ans = 0;
  _s = s + s;
  long long con = 1;
  if(s.size() == 1){
    cout << k / 2 << endl;
  }
  else {
    if(k == 1){
      for(int i = 0;i < s.size() - 1;i++){
        if(s[i] != s[i + 1]){
          if(con == 2 || con == 3){
            ans += 1;
          }
          else if(con > 3){
            ans += (con / 2);
          }
          con = 1;
        }
        else{
          con++;
        }
        if(i == s.size() - 2) {
          if(con == 2 || con == 3){
            ans += 1;
          }
          else if(con > 3){
            ans += (con / 2);
          }
        }
      }
    }
    else {
      long long plus = 0;
      int i;
      for(i = 0;i < _s.size() - 1;i++){
        if(_s[i] != _s[i + 1]){
          if(con == 2 || con == 3){
            ans += 1;
          }
          else if(con > 3){
            ans += (con / 2);
          }
          con = 1;
        }
        else{
          con++;
        }
        if(i == s.size() - 2) {
          if(con == 2 || con == 3){
            plus = ans + 1;
          }
          else if(con > 3){
            plus = ans + (con / 2);
          }
          else plus = ans;
        }
        else if(i == _s.size() - 2){
          if(con == 2 || con == 3){
            ans += 1;
          }
          else if(con > 3){
            ans += (con / 2);
          }
          else{}
        }
      }
      if(con == _s.size()) ans = s.size() * k / 2; 
      else ans += ((k - 2) * (ans - plus));
    }
    cout << ans << endl;
  }
  return 0;
}

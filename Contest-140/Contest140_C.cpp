#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int smaller(int a,int b){
  if(a > b) return b;
  else return a;
}

int main(void){
  int n;
  cin >> n;

  vector<int> b(n - 1);
  for(int i = 0;i < n - 1;i++){
    cin >> b[i];
  }

  long ans = b[n - 2];
   for(int i = n - 2;i > 0;i--){
      ans += smaller(b[i],b[i - 1]);
     
    }
  cout << ans + b[0];
  


  return 0;    
}


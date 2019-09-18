#include <iostream>
#include <vector>
#include <algorithm>
 
 
using namespace std;
 
int main(void){
  int n,m;
  cin >> n >> m;
 
  vector<int> a(n);
 
  for(int i = 0; i< n;i++)
    cin >> a[i];
 
  
  for(int i = 0;i < m;i++){
    auto max_ite = max_element(a.begin(),a.end());
    *max_ite /= 2;
  }
 
  long ans = 0;
 
  for(int i = 0;i < n;i++)
    ans += a[i];
 
  cout << ans << endl;
  
  return 0;    
}

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int n,buff;
  cin >> n;

  vector<long> VH;

  for(int i = 0;i < n;i++){
    cin >> buff;
    VH.push_back(buff);
  }

  bool flag = true;

  for(int i = n- 1;i > 0;i--){
    if(VH[i] + 1 < VH[i - 1]) flag = false;
  }

  if(flag){
    cout << "Yes" << endl;
  }

  else {
    cout << "No" << endl;
  }
  
  return 0;
}

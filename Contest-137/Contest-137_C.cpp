#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int i,j,k,n;
  long ans = 0;
  string buff;

  cin >> n;

  vector<string> S;
  for(i = 0;i < n;i++){
    cin >> buff;
    S.push_back(buff);
  }

  for(int i = 0;i < n;i++){
    cout << S[i] << '\n';
  }
  
  for(i = 0;i < n - 1;i++){
    for(j = i + 1;j < n;j++){
      if(S[i] == S[j]) ans++;
    }
  }


  cout << ans << endl;
  return 0;
}

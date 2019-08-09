#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
  int n,buff;
  cin >> n;

  vector<int> A;
  for(int i = 0;i < n;i++){
    cin >> buff;
    A.push_back(buff);
  }
  
  const auto _max = max_element(A.begin(),A.end());
  const auto _indent = distance(A.begin(),max);
  sort(A.rbegin(),A.rend());
  
  for(int i = 0;i < n;i++){
    if(i == indent) cout << A[1] << '\n';
    else cout << A[0] << '\n';
  }
  cout << endl;
}

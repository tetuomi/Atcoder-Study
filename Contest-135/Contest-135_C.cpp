#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int n;

  cin >> n;

  int buff1,buff2;

  vector<int> A;
  vector<int> B;

  for(int i = 0; i < n + 1;i++){
    cin >> buff1;
    A.push_back(buff1);
  }

  for(int i = 0;i< n;i++){
    cin >> buff2;
    B.push_back(buff2);
  }

  long sum = 0;

  for(int i = 0;i < n;i++){
    if(A[i] <= B[i]){
      sum += A[i];
      if(A[i + 1] >= (B[i] - A[i])){
        A[i + 1] -= (B[i] - A[i]);
        sum += (B[i] - A[i]);
      }
      else{
        sum += A[i + 1];
        A[i + 1] = 0;
      }
    }
    else{
      sum += B[i];
    }
  }
  cout << sum << endl;
  return 0;
}

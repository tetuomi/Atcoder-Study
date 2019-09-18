#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(void){
  long N,k,Q;
  cin >> N >> k >> Q;
  vector<long> a(Q);
  for(int i = 0;i < Q;i++){
    cin >> a[i];
  }
  vector<long> people(N,k); 
  int min = 0;

  for(int i = 0;i < Q;i++,min++){
    people[a[i] - 1]++;
  }

  for(int i = 0;i < N;i++){
    if(min >= people[i]) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
  
  return 0;    
}

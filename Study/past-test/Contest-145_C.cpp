#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

/*
**
** 23分31秒
**
*/

using namespace std;

double calc(int xi,int yi,int xj,int yj) {
  return sqrt((double)((xi-xj)*(xi-xj)+(yi-yj)*(yi-yj)));
}
int perm(int n){
  int ans = 1;
  for(int i = 1;i <= n;i++) {
    ans *= i;
  }
  return ans;
}

int main(void) {
  int n;
  cin >> n;
  vector<int> v(n),x(n),y(n);
  for(int i = 0;i < n;i++){
    cin >> x[i] >> y[i];
    v[i] = i+1;
  }

  double sum = 0;
  
  do {
    for(int i = 0;i < n - 1;i++){
      sum += calc(x[v[i]-1],y[v[i]-1],x[v[i+1]-1],y[v[i+1]-1]);
    }
  } while (next_permutation(v.begin(), v.end()));

  cout << fixed << setprecision(6);
  cout << sum / double(perm(n)) << endl;
  
  return 0;
}

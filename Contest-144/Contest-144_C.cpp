#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  long long n;
  cin >> n;

  bool flag = false;
  long long i;
  vector<long long> a(1000001,n + 1);
  for(i = 1;i * i <= n;i++){
    if(n % i == 0){
      a[i] = i + n / i - 2;
    }
  }

  cout << *min_element(a.begin(), a.end()) << endl;
  return 0;
}

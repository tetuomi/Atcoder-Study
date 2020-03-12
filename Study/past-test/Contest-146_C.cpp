#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 1000000000

using namespace std;

int keta(long long n) {
  int ans = 0;
  for(long long i = n;i > 0;i /= 10){
    ans++;
  }
  return ans;
}

bool calc(long long a,long long b,long long n,long long x) {
  return a * n + b * keta(n) <= x;
}

long long binary_search(long long a,long long b,long long x) {
  long long ok = 0,ng = MAX+1,check;
  while(ng - ok > 1) {
    check = (ok + ng) / 2;
    if(calc(a,b,check,x)) ok = check;
    else ng = check;
  }
  return ok;
}

int main(void) {
  long long a,b,x;

  cin >> a >> b >> x;

  cout << binary_search(a,b,x) << endl;
  
  return 0;
}

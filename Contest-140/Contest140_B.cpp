#include <iostream>
#include <vector>



using namespace std;

int main(void){
int n;
cin >>n;
vector<int> a(n);
vector<int> b(n);
vector<int> c(n - 1);

for(int i = 0;i < n;i++){
cin >> a[i];
}

for(int i = 0;i < n;i++){
cin >> b[i];
}
for(int i = 0;i < n;i++){
cin >> c[i];
}

int ans = 0;
ans += b[a[0] - 1];
for(int i = 1;i < n;i++){
ans += b[a[i] - 1];
if(a[i] - 1== a[i - 1]) ans += c[a[i] - 2];
}

cout << ans;

  return 0;    
}


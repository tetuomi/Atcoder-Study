#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct work
  {
    int day;
    int pay;

    bool operator<(const work &another) const
    {
      return pay == another.pay? day < another.day : pay < another.pay;
    };
  };


int main(void)
{
  
  vector<work> Vwork;

  int n,m,buff1,buff2;
  long ans = 0;
  cin >> n >> m;

  for(int i = 0;i < n;i++){
    cin >> buff1 >> buff2;
    Vwork.push_back({buff1,buff2});
  }

  sort(Vwork.rbegin(),Vwork.rend());

  for(int i = 0,_day = 0;_day <= m && i != n;i++){
    if(Vwork[i].day + _day <= m){
      ans += Vwork[i].pay;
      _day++;
    }
  }

  cout << ans << endl;
  return 0;
}

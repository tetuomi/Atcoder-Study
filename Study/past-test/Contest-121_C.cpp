#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
**
**  17分21秒
**
*/
int main(void) {
  long long n,m;
  cin >> n >> m;
  pair<long long, long long> drink[100000];

  for (int i = 0;i < n;i++)
  {
    cin >> drink[i].first >> drink[i].second;
  }

  sort(drink, drink + n);

  long long ans = 0;
  long long buy  = 0;
  
  for (int i = 0;i < n;i++)
  {
    if (buy == m)
    {
      break;
    }
    
    if (drink[i].second >= m - buy)
    {
      ans += (m - buy) * drink[i].first;
      buy += (m - buy);
    }
    else
    {
      ans += drink[i].second * drink[i].first;
      buy += drink[i].second;
    }
  }
  cout << ans << endl;
  
  return 0;
}

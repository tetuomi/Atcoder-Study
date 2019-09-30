#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

  struct student{
    int index;
    int A;

    bool operator<(const student &s) const
    {
      return A < s.A;
    };
  };

int main(void) {

  int n,buff;
  cin >> n;
  vector<student> a;
  for(int i = 0;i < n;i++){
    cin >> buff;
    a.push_back({i + 1,buff});
  }
  sort(a.begin(),a.end());
  for(int i = 0;i < n;i++){
    cout << a[i].index << endl;
  }

  return 0;
}

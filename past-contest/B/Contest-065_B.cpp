#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> seen;
    for (int i = 0;i < n;i++) cin >> a[i];

    int next = 0, count = 1;
    
    while(true)
    {
        if (a[next] == 2)
        {
            cout << count << endl;
            return 0;
        }
        
        seen.insert(a[next]);
        next = a[next] - 1;
        
        if (seen.size() != count)
        {
            cout << -1 << endl;
            return 0;
        }
        count++;
    }    
    
    return 0;
}

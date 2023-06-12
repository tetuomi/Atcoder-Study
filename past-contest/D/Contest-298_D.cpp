#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n-1; i++)
    {
        cout << a[i];
        if (i != a.size() - 1) cout << endl;
        if (a[i+1] > a[i])
        {
            int k = 1;
            while (a[i]+k != a[i+1])
            {
                cout << a[i] + k << endl;
                k++;
            }
        }
        else
        {
            int k = 1;
            while (a[i]-k != a[i+1])
            {
                cout << a[i] - k << endl;
                k++;
            }
        }
    }
    cout << a[n-1] << endl;

    return 0;
}

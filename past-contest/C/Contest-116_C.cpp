#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
    https://atcoder.jp/contests/abc116/tasks/abc116_c

    
*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> setprecision(12);

    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    int max_h = *max_element(h.begin(), h.end());
    int ans = 0;
    for (int height = 0; height < max_h; height++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (h[i] > height)
            {
                count++;
                while (i+1 < n && h[i+1] > height) i++;
            }
        }

        ans += count;
    }

    cout << ans << '\n';

    return 0;
}
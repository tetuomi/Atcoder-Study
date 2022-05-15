#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    cin >> setprecision(12);

    int n, m;
    cin >> n >> m;

    vector<int> p(m);
    vector<string> s(m);
    for (int i = 0; i < m; i++) cin >> p[i] >> s[i];


    vector<int> wa_num(n, 0);
    vector<bool> solved(n, false);
    int wa_ans = 0;
    for (int i = 0; i < m; i++)
    {   
        if (!solved[p[i]-1] && s[i] == "WA")
        {
            wa_num[p[i] - 1]++;
        }
        else if (!solved[p[i]-1] && s[i] == "AC")
        {
            wa_ans += wa_num[p[i]-1];
            solved[p[i]-1] = true;

        }
    }

    cout << accumulate(solved.begin(), solved.end(), 0) << ' ' << wa_ans << endl;

    return 0;
}

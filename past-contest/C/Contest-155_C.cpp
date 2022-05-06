#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;

    map<string, int> m{};
    vector<string> ss(n);
    
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ss[i] = s;
    }

    for (int i = 0; i < n; i++)
    {
        m[ss[i]]++;
    }

    int mv = (*max_element(m.begin(), m.end(), [](const auto& a, const auto& b) { return a.second < b.second; })).second;

    for (const auto& p: m)
    {
        if (mv == p.second) cout << p.first << endl;
    }
    
    return 0;
}

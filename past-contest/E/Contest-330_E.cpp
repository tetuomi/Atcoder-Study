#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep (i, 0, n) cin >> a[i];
    multiset<int> ms;
    for (auto v : a) ms.insert(v);

    set<int> mex_candidates;
    rep (i, 0, n+100) if (ms.find(i) == ms.end()) mex_candidates.insert(i);

    while (q--)
    {
        int id, x;
        cin >> id >> x;
        id--;
        
        ms.erase(ms.find(a[id]));
        if (ms.find(a[id]) == ms.end()) mex_candidates.insert(a[id]);
        a[id] = x;
        ms.insert(x);
        if (mex_candidates.find(x) != mex_candidates.end()) mex_candidates.erase(mex_candidates.find(x));
    
        cout << *mex_candidates.begin() << endl;
    }

    return 0;
}
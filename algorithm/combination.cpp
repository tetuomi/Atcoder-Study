#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

template <class T>
void dfs_combination(vector<T> &arr, int idx, int r, vector<T> &pattern, vector<vector<T>> &result) {
    if (r == 0) {
        result.push_back(pattern);
        return;
    }
    if ((idx + r) > arr.size()) {
        return;
    }

    // select
    pattern.push_back(arr[idx]);
    dfs_combination(arr, idx + 1, r - 1, pattern, result);
    pattern.pop_back();
    // not select
    dfs_combination(arr, idx + 1, r, pattern, result);
}

template <class T>
vector<vector<T>> combination(vector<T> &arr, int r) {
    if (arr.size() < r) {
        printf("combination ERROR: r is larger than arr.size()\n");
        exit(1);
    }

    vector<T> pattern;
    vector<vector<T>> result;
    dfs_combination(arr, 0, r, pattern, result);
    return result;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    vector<int> arr{1, 2, 3, 4, 5};
    auto comb = combination(arr, 2);

    for (auto v: comb)
    {
        for (auto x: v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    vector<char> arr2{'a', 'b', 'c', 'd', 'e'};
    auto comb2 = combination(arr2, 2);

    for (auto v: comb2)
    {
        for (auto x: v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
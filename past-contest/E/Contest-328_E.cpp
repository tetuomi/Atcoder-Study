#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

class UnionFind
{
public:
	UnionFind() = default;

	explicit UnionFind(size_t n)
		: m_parents(n)
		, m_sizes(n, 1)
	{
		iota(m_parents.begin(), m_parents.end(), 0);
	}

	int find(int i)
	{
		if (m_parents[i] == i)
		{
			return i;
		}

		return (m_parents[i] = find(m_parents[i]));
	}

	void merge(int a, int b)
	{
		a = find(a);
		b = find(b);

		if (a != b)
		{
			// union by size (小さいほうが子になる）
			if (m_sizes[a] < m_sizes[b])
			{
				swap(a, b);
			}

			m_sizes[a] += m_sizes[b];
			m_parents[b] = a;
		}
	}

	bool connected(int a, int b)
	{
		return (find(a) == find(b));
	}

	int size(int i)
	{
		return m_sizes[find(i)];
	}

private:
	vector<int> m_parents;
	vector<int> m_sizes;
};

struct Edge
{
    ll from;
    ll to;
    ll cost;
};

// 最小全域木を構成して，その最小コストを返す
ll kruskal(vector<Edge>& e, vector<ll>& order, ll n, ll k)
{
    ll min_cost = 0;
    UnionFind uf(n);
    for (auto i : order)
    {
        if (uf.connected(e[i].from, e[i].to) == false)
        {
            uf.merge(e[i].from, e[i].to);
            min_cost += e[i].cost;
            min_cost %= k;
        }
    }
    if (uf.size(0) != n) return 1e18;
    return min_cost;
}

void dfs_combination(vector<ll> &arr, int idx, int r, vector<ll> &pattern, vector<vector<ll>> &result)
{
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

vector<vector<ll>> combination(vector<ll> &arr, int r)
{
    if (arr.size() < r) {
        printf("combination ERROR: r is larger than arr.size()\n");
        exit(1);
    }

    vector<ll> pattern;
    vector<vector<ll>> result;
    dfs_combination(arr, 0, r, pattern, result);
    return result;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    ll n, m, k;
    cin >> n >> m >> k;

    vector<Edge> edges;
    rep (_, 0, m)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        u--; v--;
        edges.push_back({u, v, c});
    }

    vector<ll> arr(m);
    rep (i, 0, m) arr[i] = i;
    auto orders = combination(arr, n-1);
    ll ans = 1e18;
    for (auto o : orders)
    {
        ans = min(ans, kruskal(edges, o, n, k));
    }

    cout << ans << endl;

    return 0;
}
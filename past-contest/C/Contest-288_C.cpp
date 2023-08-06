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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges;
    rep (i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        x--; y--;

        edges.push_back({x, y});
    }

    UnionFind uf(n);
    int ans = 0;
    for (auto [x, y] : edges)
    {
        if (uf.connected(x, y) == true) ans++;
        else uf.merge(x, y);
    }    

    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

/*
N個の街があり、0,1,2,...,N−1と番号がついています。
最初、これらの街の間に道はなく、街と街を行き来することはできません。
道の候補がM個あります。i番目の道を建設するには建設費がci​円かかりますが、
建設すると街ui​と街vi​を双方向に結ぶ道ができ、行き来できるようになります。
M個の道の候補からいくつか選んで建設し、ある街から別の任意の街へ道をたどって到達できるようにしたいです。
そのように道を選んで建設するために必要な建設費の最小値を求めてください。

入力：  N M
        u(0) v(0) c(0)
        .
        .
        .
        u(M-1) v(M-1) c(M-1)
出力:   最小値
*/

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
ll kruskal(vector<Edge>& edges, const int n)
{
    sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b)
                                        {
                                            return a.cost < b.cost;
                                        });

    ll min_cost = 0;
    UnionFind uf(n);
    for (const auto& edge : edges)
    {
        if (uf.connected(edge.from, edge.to) == false)
        {
            uf.merge(edge.from, edge.to);
            min_cost += edge.cost;
        }
    }

    return min_cost;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, m;
    cin >> n >> m;

    vector<Edge> edges;
    while(m--)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        edges.push_back({u, v, c});
    }

    cout << kruskal(edges, n) << endl;

    return 0;
}
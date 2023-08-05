#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

/*
人1 から 人N までのN 人の人がいます。
「人Aiと人Biは友達である」という情報がM 個与えられます。同じ情報が複数回与えられることもあります。
X と Y が友達、かつ、Y とZ が友達ならば、
X とZ も友達です。また、M 個の情報から導くことができない友達関係は存在しません。
悪の高橋君は、このN 人をいくつかのグループに分け、全ての人について「同じグループの中に友達がいない」という状況を作ろうとしています。
最小でいくつのグループに分ければ良いでしょうか？

入力例： N M
        A1 B1
        .
        .
        AM BM

出力例： 答え
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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, m;
    cin >> n >> m;

    UnionFind uf(n);
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        a--; b--;

        uf.merge(a, b);
    }

    int ans = 0;
    rep (i, 0, n) ans = max(ans, uf.size(i));

    cout << ans << endl;

    return 0;
}
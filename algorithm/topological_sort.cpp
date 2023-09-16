#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

/*
abc315 E
1 から N までの番号がついた N 冊の本があります。
本i にはCi冊の前提となる本があり、そのうち j 冊目は本
Pi,jで、本i を読む前にこのCi冊をすべて読む必要があります。
ただし、適切な順序を選ぶことですべての本を読むことができます。

あなたは本1 を読むために必要な最小の数の本を読もうとしています。
本1 以外に読まなければならない本の番号を読むべき順に出力してください。ただし、この条件下で読むべき本の集合は一意に定まります。
条件を満たす読む順番が複数考えられる場合は、そのいずれを出力しても構いません。

*/

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n;
    cin >> n;
    vector<vector<int>> g(n);
    rep (i, 0, n)
    {
        int c;
        cin >> c;
        rep (j, 0, c)
        {
            int p;
            cin >> p;
            p--;
            g[i].push_back(p);
        }
    }


    


    return 0;
}
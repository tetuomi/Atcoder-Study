#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;


int ha, wa, hb, wb, hx, wx;

bool is_in(int _x, int _y)
{
    return 10 <= _x && _x < 10+hx && 10 <= _y && _y < 10+wx;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    cin >> ha >> wa;
    vector<string> a(ha);
    rep (i, 0, ha) cin >> a[i];

    cin >> hb >> wb;
    vector<string> b(hb);
    rep (i, 0, hb) cin >> b[i];

    cin >> hx >> wx;
    vector<string> x(hx);
    rep (i, 0, hx) cin >> x[i];


    string ans = "No";
    rep (a_i, 0, 30-ha+1) rep (a_j, 0, 30-wa+1) rep (b_i, 0, 30-hb+1) rep (b_j, 0, 30-wb+1)
    {
        // x内にはいってるか
        bool is_in_grid = true;
        rep (i, 0, ha) rep (j, 0, wa) if (a[i][j] == '#')
        {
            if (is_in(a_i + i, a_j + j) == false) is_in_grid = false;
        }
        rep (i, 0, hb) rep (j, 0, wb) if (b[i][j] == '#')
        {
            if (is_in(b_i + i, b_j + j) == false) is_in_grid = false;
        }
        if (is_in_grid == false) continue;

        // a, bがxに一致するかどうかを見る
        vector<string> grid(hx, string(wx, '.'));
        rep (i, 0, ha) rep (j, 0, wa) if (a[i][j] == '#')
        {
            grid[a_i + i - 10][a_j + j - 10] = '#';
        }
        rep (i, 0, hb) rep (j, 0, wb) if (b[i][j] == '#')
        {
            grid[b_i + i - 10][b_j + j - 10] = '#';
        }
        bool is_ok = true;
        rep (i, 0, hx)
        {
            if (x[i] != grid[i]) is_ok = false;
        }

        if (is_ok == true) ans = "Yes";
    }

    cout << ans;

    return 0;
}
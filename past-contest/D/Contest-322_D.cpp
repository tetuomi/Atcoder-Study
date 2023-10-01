#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;

vector<vector<string>> calc_rotate_mino(vector<string> original_mino)
{
    vector<vector<string>> mino(4, vector<string>(4, "...."));
    vector<vector<int>> rotate_x(4, vector<int>()), rotate_y(4, vector<int>());

    rep (i, 0, 4)
    {
        rep (j, 0, 4)
        {
            if (original_mino[i][j] == '#')
            {
                mino[0][i][j] = '#';
            }
        }
    }
    rep (r, 0, 3)
    {
        rep (i, 0, 4)
        {
            rep (j, 0, 4)
            {
                if (mino[r][i][j] == '#')
                {
                    rotate_x[r+1].push_back(-j);
                    rotate_y[r+1].push_back(i);
                }
            }
        }

        int min_x = *min_element(rotate_x[r+1].begin(), rotate_x[r+1].end());
        int min_y = *min_element(rotate_y[r+1].begin(), rotate_y[r+1].end());
        rep (i, 0, rotate_x[r+1].size())
        {
            int x = rotate_x[r+1][i] - min_x;
            int y = rotate_y[r+1][i] - min_y;
            mino[r+1][x][y] = '#';
        }
    }

    return mino;
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    vector<vector<string>> minos(3, vector<string>());
    rep (i, 0, 3)
    {
        rep (j, 0, 4)
        {
            string s;
            cin >> s;
            minos[i].push_back(s);
        }
    }

    vector<vector<string>> mino1 = calc_rotate_mino(minos[0]);
    vector<vector<string>> mino2 = calc_rotate_mino(minos[1]);
    vector<vector<string>> mino3 = calc_rotate_mino(minos[2]);

    int total_mino_cnt = 0;
    rep (i, 0, 4) rep (j, 0, 4) if (mino1[0][i][j] == '#') total_mino_cnt++;
    rep (i, 0, 4) rep (j, 0, 4) if (mino2[0][i][j] == '#') total_mino_cnt++;
    rep (i, 0, 4) rep (j, 0, 4) if (mino3[0][i][j] == '#') total_mino_cnt++;

    if (total_mino_cnt != 16)
    {
        cout << "No" << endl;
        return 0;
    }

    string ans = "No";
    rep (mino1_posi, 0, 49)
    {
        rep (mino2_posi, 0, 49)
        {
            rep (mino3_posi, 0, 49)
            {
                int mino1_x = mino1_posi / 7;
                int mino1_y = mino1_posi % 7;
                int mino2_x = mino2_posi / 7;
                int mino2_y = mino2_posi % 7;
                int mino3_x = mino3_posi / 7;
                int mino3_y = mino3_posi % 7;

                for (auto rotated_mino2: mino2)
                {
                    for (auto rotated_mino3: mino3)
                    {
                        vector<vector<int>> grid(10, vector<int>(10, 0));
                        rep (i, 0, 4) rep (j, 0, 4)
                        {
                            if (mino1[0][i][j] == '#')
                            {
                                int x = mino1_x + i;
                                int y = mino1_y + j;
                                grid[x][y]++;
                            }
                            if (rotated_mino2[i][j] == '#')
                            {
                                int x = mino2_x + i;
                                int y = mino2_y + j;
                                grid[x][y]++;
                            }
                            if (rotated_mino3[i][j] == '#')
                            {
                                int x = mino3_x + i;
                                int y = mino3_y + j;
                                grid[x][y]++;
                            }
                        }

                        // minoがおさまってるか判定
                        int cnt = 0;
                        rep (grid_x, 3, 7) rep (grid_y, 3, 7)
                        {
                            cnt += (grid[grid_x][grid_y] == 1);
                        }
                        if (cnt == 16)
                        {
                            ans = "Yes";
                            cout << ans << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;


    return 0;
}
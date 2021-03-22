#include <bits/stdc++.h>
using namespace std;

int h, w;

int dfs(int i, int j, vector<vector<bool>> tile, int a)
{
  if (i == h - 1 && j == w - 1)
  {
    if (a == 0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  int result = 0;
  //ぬらない
  if (j == w - 1)
  {
    result = dfs(i + 1, 0, tile, a);
  }
  else
  {
    result = dfs(i, j + 1, tile, a);
  }
  //右に塗る
  if (j < w - 1 && tile[i][j] && a > 0 && tile[i][j + 1])
  {
    tile[i][j] = false;
    tile[i][j + 1] = false;
    result += dfs(i, j + 1, tile, a - 1);
    tile[i][j] = true;
    tile[i][j + 1] = true;
  }
  //下に塗る
  if (i < h - 1 && tile[i][j] && tile[i + 1][j] && a > 0)
  {
    tile[i][j] = false;
    tile[i + 1][j] = false;
    if (j == w - 1)
    {
      result += dfs(i + 1, 0, tile, a - 1);
    }
    else
    {
      result += dfs(i, j + 1, tile, a - 1);
    }
    tile[i][j] = true;
    tile[i + 1][j] = true;
  }
  return result;
}

int main()
{
  int a, b;
  cin >> h >> w >> a >> b;
  vector<vector<bool>> tile(h, vector<bool>(w, true));
  int ans = dfs(0, 0, tile, a);
  cout << ans << endl;
}
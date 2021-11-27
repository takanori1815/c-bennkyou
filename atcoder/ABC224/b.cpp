#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll h, w;
  cin >> h >> w;
  vector<vector<ll>> field(h, vector<ll>(w));
  for (int i = 0; i < h; ++i)
  {
    for (int j = 0; j < w; ++j)
    {
      cin >> field[i][j];
    }
  }

  for (int i = 0; i < h; ++i)
  {
    for (int j = 0; j < w; ++j)
    {
      for (int k = i + 1; k < h; ++k)
      {
        for (int l = j + 1; l < w; ++l)
        {
          if (field[i][j] + field[k][l] > field[k][j] + field[i][l])
          {
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
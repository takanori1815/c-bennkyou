#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n, m;
  cin >> n >> m;
  vector a(60, vector<int>(60));
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; i < n; i++)
    {
      cin >> a[i][j];
    }
  }
  int ans = 0;

  for (int i = 1; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {

      for (int k = 0; k < m; k++)
      {
        for (int l = 0; l < n - 1; l++)
        {
          if (a[k][l] != i || a[k][l + 1] != j)
          {
            ans++;
            continue;
          }
          else if (a[k][l] != j || a[k][l + 1] != i)
          {
            ans++;
            continue;
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}

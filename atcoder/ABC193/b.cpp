#include <bits/stdc++.h>
using namespace std;
int my_min(int x, int y, int z)
{

  if (x < z)
  {
    return y;
  }
  else
  {
    return -1;
  }
}
int main()
{
  int n;
  cin >> n;
  int ans = INT_MAX;
  int a[n];
  int p[n];
  int x[n];
  for (int i = 0; i < n; i++)
  {
    int r;
    cin >> a[i] >> p[i] >> x[i];
    r = my_min(a[i], p[i], x[i]);
    if (r == -1)
    {
      continue;
    }
    else
    {
      if (ans > r)
        ans = r;
    }
  }
if(ans == INT_MAX) ans = -1;
  cout << ans << endl;
}
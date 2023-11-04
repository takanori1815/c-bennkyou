#include <bits/stdc++.h>
using namespace std;
#define ll long long
int q()
{
  for (int i = 0; i < 18; i++)
  {
  }

  return 0;
}
int main()
{
  int n;
  cin >> n;
  vector<int> w(n);
  vector<int> x(n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> w.at(i) >> x.at(i);
  }
  for (int i = 0; i < 24; i++)
  {
    int t = 0;
    for (int k = 0; k < n; k++)
    {
      int a = x.at(k);
      if (i + x.at(k) > 24)
      {
        a = x.at(k) - 24;
      }
      if (i + a >= 9 && i + a < 18)
      {
        t += w.at(k);
      }
    }
    if (ans <= t)
    {
      ans = t;
    }
  }

  cout << ans << endl;
  return 0;
}
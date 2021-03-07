#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i) >> b.at(i);
  }
  int res = 1000000000;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    { if (i == j)
      {
        res = min(res, a[i] + b[j]);
      }
      res = min(res, max(a[i], b[j]));
      if (i == j)
      {
        res = min(res, a[i] + b[j]);
      }
    }
  }
  cout << res << endl;
}

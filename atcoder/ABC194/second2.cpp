#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  int c = 0;
  cin >> a.at(0) >> b.at(0);
  int m, w;
  int count = 1001;
  m = a.at(0);
  w = b.at(0);
  for (int i = 1; i < n; i++)
  {

    cin >> a.at(i) >> b.at(i);
    if (m >= a.at(i))
    {
      m = a.at(i);
    }
    if (w >= b.at(i))
    {
      w = b.at(i);
    }
    if (m == a.at(i) && w == b.at(i))
    {
      c = m + w;
      count = i;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (count != i)
    {

      if (c > a.at(i))
      {
        m = a.at(i);
        c = 0;
        break;
      }
      if (c > b.at(i))
      {
        w = b.at(i);
        c = 0;
        break;
      }
    }
  }
  if (c == 0)
  {
    cout << max(m, w) << endl;
  }
  else
  {
    cout << c << endl;
  }
}
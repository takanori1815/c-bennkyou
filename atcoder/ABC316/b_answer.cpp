#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  if (s == t)
  {
    cout << 0 << endl;
    return 0;
  }
  for (int i = 0; i < n; i++)
  {

    if (s.at(i) != t.at(i))
    {

      break;
    }

    if (s.at(i) == t.at(i) && n - 1 == i)
    {
      for (int j = 0; j < n; j++)
      {

        if (s.at(j) != t.at(m - n + j))
        {
          cout << 1 << endl;
          return 0;
        }
        if (s.at(j) == t.at(m - n + j) && n - 1 == j)
        {
          cout << 0 << endl;
          return 0;
        }
      }
    }
  }
  for (int j = 0; j < n + 1; j++)
  {

    if (s.at(j) != t.at(m - n + j))
    {

      break;
    }
    if (n - 1 == j && s.at(j) == t.at(m - n + j))
    {
      cout << 2 << endl;
      return 0;
    }
  }

  cout << 3 << endl;
  return 0;
}
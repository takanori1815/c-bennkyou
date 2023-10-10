#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  int a = true;
  int b = true;
  for (int i = 0; i < n; i++)
  {

    if (s.at(i) != t.at(i))
      a = false;
  }
  for (int j = 0; j < n; j++)
  {
    if (s.at(j) != t.at(m - n + j))
      b = false;
  }

  if (a)
  {
    cout << (a ? 0 : 1) << endl;
  }
  else
  {
    cout << (b ? 2 : 3) << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (n == 3)
  {
    if (s == "ABC")
    {
      cout << 1 << endl;
      return 0;
    }
    cout << -1 << endl;
    return 0;
  }
  for (int i = 0; i < n - 2; i++)
  {
    if (s.at(i) != 'A')
    {
      continue;
    }
    else if (s.at(i + 1) != 'B')
    {
      continue;
    }
    else if (s.at(i + 2) == 'C')
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
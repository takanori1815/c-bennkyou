#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'l')
    {
      s[i] = '1';
    }
    else if (s[i] == 'o')
    {
      s[i] = '0';
    }
     if (t[i] == 'l')
    {
      t[i] = '1';
    }
    else if (t[i] == 'o')
    {
      t[i] = '0';
    }
    if (s[i] != t[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
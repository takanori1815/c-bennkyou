#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  string s, t;
  cin >> s >> t;

  if (s == t)
  {
    cout << "Yes" << endl;
    return 0;
  }
  for (int i = 1; i < s.length(); i++)
  {
    if (s.at(i - 1) == t.at(i) && t.at(i - 1) == s.at(i))
    {
      string u;
      u = s;
      u.at(i - 1) = s.at(i);
      u.at(i) = s.at(i - 1);
      if (u == t)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
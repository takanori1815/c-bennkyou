#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n - 1; i++)
  {
    if ((s.at(i) == 'a' && s.at(i+1) == 'b') || (s.at(i) == 'b' && s.at(i+1) == 'a'))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
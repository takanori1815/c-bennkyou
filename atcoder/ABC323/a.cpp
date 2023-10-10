#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  string s;
  cin >> s;
  int a = s.size();
  for (int i = 0; i < a / 2; i++)
  {
    if (s.at(i * 2+1) == '1')
    {
     
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
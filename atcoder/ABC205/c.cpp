#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long a, b, c;
  cin >> a >> b >> c;
  if (c % 2 == 0)
  {
    if (a < 0)
    {
      a = 0 - a;
    }
    if (b < 0)
    {
      b = 0 - b;
    }
  }
  if (a > b)
  {
    cout << '>' << endl;
  }
  else if (a == b)
  {
    cout << '=' << endl;
  }
  else
  {
    cout << '<' << endl;
  }
}
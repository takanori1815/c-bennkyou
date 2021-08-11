#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  long long as = a, gh = 0;
  for (int i = 1; i <= a; i++)
  {
    as += b;
    gh += c;
    if (as <= gh*d)
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
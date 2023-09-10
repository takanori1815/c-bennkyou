#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n, m, p;
  cin >> n >> m >> p;
  int a = 0;
  int p1 = p;
  for (int i = 0; i < n; i++)
  {
    if (n >= m + p * i)
    {
      a++;
    }
    else
    {
      cout << a << endl;
      return 0;
    }
  }
  cout << a << endl;
  return 0;
}
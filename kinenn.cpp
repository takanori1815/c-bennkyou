#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  vector<long long> a(n);
  vector<long long> b(n);
  vector<long long> c(n);
  long long mac = 0;
  for (long long i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  for (long long i = 0; i < n; i++)
  {
    cin >> b.at(i);
  }
  for (long long i = 0; i < n; i++)
  {
    if (i == 0)
    {
      c.at(i) = a.at(i) * b.at(i);
      cout << c.at(i) << endl;
      mac = a.at(i);
      continue;
    }
    if (mac > a.at(i))
    { c.at(i) = mac * b.at(i);
      if (c.at(i-1) > c.at(i))
      {
        cout << c.at(i-1) << endl;
        c.at(i) = c.at(i-1);
      }
      else
      {cout << c.at(i) << endl;
      }
    }else
    {
      mac = a.at(i);
      c.at(i) = mac * b.at(i);
      if (c.at(i-1) > c.at(i))
      {
        cout << c.at(i-1) << endl;
        c.at(i) = c.at(i-1);
      }
      else
      {cout << c.at(i) << endl;
      }
    }
  }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  double d, h;
  cin >> d >> h;
  vector<double> a(n);
  vector<double> b(n);
 
  double m;
  m = h / d;
  double j = 0;
  double v, w;
  v = 0;
  w = 0;
  for (int i = 0; i < n; i++)
  { 
    cin >> a.at(i) >> b.at(i);
  
    double u;
    u = b.at(i) / a.at(i);
    if ( a.at(i)*h <  d*b.at(i))
    {
      if ( a.at(i)*j < b.at(i))
      {
        j = u;
        v = a.at(i);
        w = b.at(i);
      }
    }
    else
    {
      continue;
    }
  }
  if (j == 0)
  {
    cout << "0.0" << endl;
    return 0;
  }
  cout << h - ((h - w)) / (d - v) * d << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, t;
  cin >> n >> m >> t;
  vector<int> a(m);
  vector<int> b(m);
  int time = 0;
  int cur = n;
  for (int i = 0; i < m; i++)
  {
    cin >> a.at(i) >> b.at(i);
  }
  for (int i = 0; i < m; i++)
  {
    cur -= a.at(i) - time;
    time = a.at(i);
    if (cur <= 0)
    {
      cout << "No" << endl;
      return 0;
    }
    cur += b.at(i) - a.at(i);
    if (cur >= n + 1)
    {
      cur = n;
    }
    time = b.at(i);
  }
  cur -= t - time;
  if (cur <= 0)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }
}
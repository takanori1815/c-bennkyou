#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  int ans1 = 0;
  int ans2 = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> b.at(i);
    if (a.at(i) == b.at(i))
    {
      ans1 += 1;
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a.at(i) == b.at(j))
      {
        ans2 += 1;
      }
    }
  }
  ans2  = ans2 - ans1;
  cout << ans1 << endl;
  cout << ans2 << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n-1; i++)
  {
    cin >> b.at(i);
  }

  for (int i = 0; i < 101; i++)
  {
    a=b;
    int total = 0;
    a[n-1] = i;
    sort(a.begin(), a.end());
    for (int i = 1; i < n-1; i++)
    {
      total += a[i];
    }
    if (total >= x)
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
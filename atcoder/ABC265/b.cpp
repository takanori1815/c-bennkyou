#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n, m, t;
  cin >> n >> m >> t;
  vector<ll> a(n - 1);
  for (int i = 1; i < n; i++)
  {
    cin >> a[i];
  }
  vector<ll> x(m+1);
  vector<ll> y(m+1);
  for (int j = 1; j < m + 1; j++)
  {
    cin >> x[j] >> y[j];
    
  }
  for (int i = 1; i < n; i++)
  {
    if (t - a[i] >= 0)
    {
      t = t - a[i];
      
    }
    else
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
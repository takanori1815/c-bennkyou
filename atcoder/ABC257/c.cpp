#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n;
  cin >> n;
  string s;
  cin >> s;
  vector<ll> w(n);
  vector<int> a(n+1);
  for (int i = 0; i < n; i++)
  {
    cin >> w[i];
    a[i] = 0;
  }
  for (int i = 0; i < n + 1; i++)
  {

    for (int j = 0; j < n; j++)
    {
      if (i == n)
      {
        if (s[j] == '0')
        {
          a[i] += 1;
        }
      }
      else if (s[j] == '1' && w[i] <= w[j])
      {
        a[i] += 1;
      }
      else if (s[j] == '0' && w[i] > w[j])
      {
        a[i] += 1;
      }
    }

  
  }
    cout << *max_element(begin(a), end(a)) << endl;
}
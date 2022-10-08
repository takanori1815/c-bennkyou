#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> a(k + 1);
  vector<int> L(q);
  for (int i = 1; i < k+1; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < q; i++)
  {
    cin >> L[i];
  }
  for (int j = 0; j < q; j++)
  {
    if (a[L[j]] >= n || a[L[j]]+1==a[L[j]+1] )
    {
      continue;
       
    }
    else
    {
      a[L[j]] = a[L[j]] + 1;

    }
  }
  for (int i = 1; i < k+1; i++)
  {
    cout << a[i] << ' ';
  }
  cout << endl;
}

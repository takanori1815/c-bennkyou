#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin >> n;

  int lg = log10(n);
  //cout << lg << endl;
  int a[6];
  for (int i = 0; i < lg + 1; i++)
  {
    if (i == 0)
    {
      a[i] = n % 10;
       //cout << a[i] << endl;
    }
    else
    {
      int x = pow(10,i);
      a[i] = (n / x )%10;
      cout << a[i] << i << endl;
    }
  }
  for (int i = lg; i > 0; i--)
  {
   cout << a[i] << endl;
    if (a[i] <= a[i-1])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
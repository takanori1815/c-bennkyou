#include <bits/stdc++.h>
using namespace std;
int GCD(int m, int n)
{
  if (n == 0)
    return m;
  return GCD(n, m % n);
}
int main()
{
  int n, m;
  cin >> n >> m;
  /*cout << n << m;*/
  vector<int> a(n);
  int count = 0;
  int kazoe = 0;
  vector<int> b(1000000);
  vector<int> c(1000000);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] % 2 == 0)
    {
      count = 1;
    }
    /*cout << a[i];*/
  }
  for (int i = 1; i <= m; i++)
  {

    if (count == 1)
    {
      if (i % 2 == 0)
      {
        continue;
      }
    }
    for (int j = 0; j < n; j++)
    {
      if (GCD(i, a[j]) != 1)
      {
        break;
      }
      else if (j == n - 1)
      {
        b[kazoe] = i;
        kazoe++;
       
      }
    }
  }
  cout << kazoe << endl;
  for(int i = 0; i< kazoe; i++){
    cout << b[i] << endl;
  }
}
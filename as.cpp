#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, x;
  cin >> n >> x;
  double v, p;
  double a[n] = {};
  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v >> p;
    if(p==0){
      continue;
    }
    a[i] = v * p ;
    sum = sum + a[i];
    if (sum > x*100)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
}
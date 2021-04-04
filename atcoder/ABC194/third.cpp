#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  long long a[300000];
  long long ans1 = 0;
  long long ans2 = 0;
  long long ans3 = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    ans1 += a[i]* a[i];
    ans2 +=a[i]; 
  }
  ans3 = n* ans1- ans2* ans2;
  cout << ans3 << endl;
}
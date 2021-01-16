#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> s(pow(2, n));
  for (int i = 0; i < pow(2, n); ++i)
  {
    cin >> s[i];
  }

  int mid = pow(2, n - 1);
  int ans;
  int ans1;
  ans = *max_element(s.begin(), s.begin() + mid);
  ans1 = *max_element(s.begin() + mid, s.end());
  if (ans > ans1)
  {
    for (int i = mid ; i < pow(2, n); ++i)
    {
      if (ans1 == s[i])
      {
        cout << i+1 << endl;
      }
    }
  }
  else
  {
    for (long i = 0; i < mid; ++i)
    {
      if (ans == s[i])
      {
        cout << i + 1<< endl;
      }
    }
  
}}

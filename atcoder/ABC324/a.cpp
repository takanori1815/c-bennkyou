#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  cin >> a.at(0);
  for (int i = 1; i < n; i++)
  {
    cin >> a.at(i);
    if (a.at(0) != a.at(i))
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
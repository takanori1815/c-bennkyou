#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, s, d;
  cin >> n >> s >> d;
  vector<int> x(n);
  vector<int> y(n);
  for (int i = 0; i < n; i++)
  {
    cin >> x.at(i) >> y.at(i);
    if (s > x.at(i) && d < y.at(i))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
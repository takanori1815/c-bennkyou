#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int x;
  cin >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
    if (x != a.at(i))
    {
      cout << a.at(i) << " ";
    }
  }
  cout << endl;
}
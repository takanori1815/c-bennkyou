#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a(3);
  for (int i = 0; i < 3; i++)
  {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  if (a.at(2) - a.at(1) == a.at(1) - a.at(0))
  {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
}
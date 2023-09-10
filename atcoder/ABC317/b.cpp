#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++)
  {
    cin >> A.at(i);
  }
  sort(A.begin(), A.end());
  int x = n + A.at(0);
  for (int i = 0; i < n; i++)
  {
    if (A.at(i) != A.at(0) + i)
    {
      cout << i + A.at(0) << endl;
      return 0;
    }
  }
}
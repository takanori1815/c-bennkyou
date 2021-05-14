#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int count = 0;
  vector<long long> a(20001);
  for (int i = 0; i < n; i++)
    cin >> a.at(i);
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1; j < n; j++)
    {

      if ((a.at(i) - a.at(j)) % 200 == 0)
      {
        count++;
      }
    }
  }
  cout << count << endl;
}
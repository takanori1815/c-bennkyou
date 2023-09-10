#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, q;
  cin >> n >> q;
  vector<long long> a(n + 1);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  for (int i = 0; i < q; i++)
  {
    long long k;
    cin >> k;
    if (a.at(0) > k)
    {
      cout << k << endl;
      continue;
    }
    if (a.at(n - 1) < k)
    {
      cout << k + n << endl;
      continue;
    }
    for (int j = 0; j < n - 1; j++)
    {

      if (a.at(j) <= k && a.at(j + 1) > k + 1)
      {

        cout << k + j + 1 << endl;
        break;
      }
      if (a.at(j) + 1 == a.at(j + 1))
      {
        int s;
        s = j;
        cout << s << endl;
        for (int s = j; s < n - 1; s++)
        {

          if (a.at(s) + 1 == a.at(s + 1))
          {

            cout << s << endl;
            if (s == n - 2)
            {
              s++;
              break;
            }
            continue;
          }
          else
          {
            break;
          }
        }
        cout << k + s + 1 << endl;
        break;
      }
    }
  }
  return 0;
}
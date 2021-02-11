#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  int count = 0;
  vector<int> a(m);
  vector<int> b(m);
  for (int i = 0; i < m; i++)
  {
    cin >> a.at(i) >> b.at(i);
  }
  int k;
  cin >> k;
  vector<int> c(k);
  vector<int> d(k);
  for (int i = 0; i < k; i++)
  {
    cin >> c.at(i) >> d.at(i);
  } /*ここまで入力*/

  int ans = 0;
  for (int bit = 0; bit < (1 << k); bit++) /*ビット演算*/
  {
    vector<bool> sara(110, false);
    int tmp = 0;
    for (int i = 0; i < k; i++)
    {
      if ((bit >> i) & 1)
      {
        sara[c[i]] = true;
      }
      else
      {
        sara[d[i]] = true;
      }
    }
    for (int i = 0; i < m; i++)
    {
      if (sara[a[i]] && sara[b[i]])
      {
        tmp++;
      }
    }

    if (ans < tmp)
      ans = tmp;
  }

  cout << ans << endl;
}
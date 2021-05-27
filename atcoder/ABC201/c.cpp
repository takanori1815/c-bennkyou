#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i <= 9999; i++)
  {
    int x = i;
    vector<bool> d(10);
    for (int j = 0; j < 4; j++)
    {
      d[x % 10] = true;
      x /= 10;
    }
    bool c = true;
    for (int j = 0; j < 10; j++)
    {
      if (s[j] == 'o' && !d[j])
        c = false;
      if (s[j] == 'x' && d[j])
        c = false;
    }
    if (c)
      ans++;
  }
  cout << ans << endl;
  return 0;
}

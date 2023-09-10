#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  long long k;
  cin >> k;
  sort(s.begin(), s.end());
  int count = 0;
  do
  {
    count++;
    if (k == count)
    {
      for (int i = 0; i < s.size(); i++)
        cout << s[i];
    }
  } while (next_permutation(s.begin(), s.end()));
  cout << endl;
  return 0;
}
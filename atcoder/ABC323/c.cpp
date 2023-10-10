#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sum(string s, int n, vector<int> a)
{
  int ans = 0;
  for (int k = 0; k < n; k++)
  {
    if (s.at(k) == 'o')
    {
      ans += a.at(k);
    }
  }
  return ans;
}
int count(string s, int n)
{

  if (s.at(n) == 'x')
  {
    return 1;
  }

  return 0;
}
int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  vector<string> s(n);
  vector<int> b(n);
  vector<int> c(n);
  for (int i = 0; i < m; i++)
  {
    cin >> a.at(i);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> s.at(i);
    int ans = sum(s.at(i), n, a);
    b.at(i) = ans;
  }
  // copy(b.begin(), b.end(), c.begin());
  // sort(c.begin(), c.end());
std::vector<int>::iterator maxIt = *std::max_element(b.begin(), b.end());
  size_t index = distance(x.begin(), iter);
  for (int i = 0; i < n; i++)
  {
    if (max1 == b.at(i)+i)
    {
      cout << 0 << endl;
      continue;
    }
    for (int i =0;)
  }
}
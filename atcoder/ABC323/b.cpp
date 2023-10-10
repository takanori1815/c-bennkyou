#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sum(string s, int n)
{
  int ans = 0;
  for (int k = 0; k < n; k++)
  {
    if (s.at(k) == 'o')
    {
      ans++;
    }
  }
  return ans;
}
int main()
{

  int n;
  cin >> n;
  vector<string> S(n);
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++)
  {
    cin >> S.at(i);
    int a = sum(S.at(i), n);
    p.at(i) = make_pair(a, -1*i);
  }
  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());
  for (int i = 0; i < n; i++)
  {
    int b, a;
    tie(b, a) = p.at(i); 
    cout << -1*a + 1 << " " ;
  }
  cout << endl;
  return 0;
}

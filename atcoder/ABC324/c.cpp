#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool equal(string s, string t)
{
  if (s == t)
  {
    return 1;
  }

  return 0;
}
bool add1(string s, string t)
{
  int a = s.size() ;
  if (a - 1 != t.size())
  {
    return 0;
  }
  for (int i = 0; i < a; i++)
  {
    string s2 = s;
    s2.erase(i, 1);
    if (s2 == t)
    {
      return 1;
    }
  }
  return 0;
}
bool erace1(string s, string t)
{
  int a = t.size() ;
  if (s.size() + 1 != a)
  {
    return 0;
  }
  for (int i = 0; i < a; i++)
  {
    string t2 = t;
    t2.erase(i, 1);
    if (t2 == s)
    {
      return 1;
    }
  }
  return 0;
}
bool change1(string s, string t)
{
  int a = t.size() ;
  if (s.size() != a)
  {
    return 0;
  }
  int miss = 0;
  for (int i = 0; i < a; i++)
  {
    if (s.at(i) != t.at(i))
    {
      miss++;
    }
    if (miss >= 2)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  int n;
  cin >> n;
  string T;
  cin >> T;
  vector<string> s(n);
  queue<int> q;
  for (int i = 0; i < n; i++)
  {
    cin >> s.at(i);
    string s1 = s.at(i);
    if (equal(s1, T))
    {
      q.push(i + 1);
      //cout << 1 << endl;
    }
    else if (add1(s1,T))
    {
      q.push(i + 1);
      //cout << 2 << endl;
    }
    else if (erace1(s1,T))
    {
      q.push(i + 1);
      //cout << 3 << endl;
    }
    else if (change1(s1,T))
    {
      q.push(i + 1);
     // cout << 4 << endl;
    }
  }
  cout << q.size() << endl;
  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
  return 0;
}
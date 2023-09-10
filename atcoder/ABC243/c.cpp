#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int n;
  cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for (int i = 0; i < n; i++)
  {
    cin >> x.at(i) >> y.at(i);
  }

  string s;
  cin >> s;
  map<int, int> right_min;
  map<int, int> left_max;
  for (int i = 0; i < n; i++)
  {
    if (s.at(i) == 'R')
    {
      if (left_max.count(y.at(i)) && x[i] < left_max[y[i]])
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
    else if (right_min.count(y.at(i)) && right_min[y[i]] < x[i])
    {
      cout << "Yes" << endl;
      return 0;
    }

    if (s.at(i) == 'R')
    {
      if (right_min.count(y.at(i)))
      {
        right_min[y.at(i)] = min(x[i], right_min[y.at(i)]);
      }
      else
      {
        right_min[y.at(i)] = x.at(i);
      }
    }
    else
    {
      if (left_max.count(y.at(i)))
      {
        left_max[y.at(i)] = max(x.at(i), left_max[y.at(i)]);
      }
      else
      {
        left_max[y.at(i)] = x.at(i);
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
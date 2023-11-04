#include <bits/stdc++.h>
using namespace std;
#define ll long long
int digit_sum(string n)
{
  int sum = 0;
  for (auto itr = n.begin(); itr < n.end(); itr++)
  {
    sum += *itr - '0';
  }
  return sum;
}
int main()
{
  string n;
  cin >> n;
  int last = int(n[n.size() - 1] - '0');
  int Sum = digit_sum(n);
  if (last % 2 == 0 || Sum % 3 == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
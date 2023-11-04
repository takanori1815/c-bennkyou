#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool a(long long n)
{
  while (n % 2 == 0)
  {
    n = n / 2;
  }

  while (n % 3 == 0)
  {
    n = n / 3;
  }

  return n == 1;
}

int main()
{
  ll n;
  cin >> n;
  if (n == 1)
  {
    cout << "Yes" << endl;
    return 0;
  }

  if (a(n))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  int count = 0;
  if (n == 1)
  {
    cout << 0 << endl;
  }
  else if (n == 2)
  {
    cout << 1 << endl;
  }
  else
  {
    while (n > 1)
    {
      n = n / 2;
      count++;
    }
    cout << count << endl;
  }
}
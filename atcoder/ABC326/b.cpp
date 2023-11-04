#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int n;
  cin >> n;
  int a = n / 100;
  int b = (n % 100) / 10;
  int c = n % 10;
  while (n > 0)
  {

    if (a * b == c)
    {
      cout << a << b << c << endl;
      return 0;
    }
    else if (c == 9)
    {
      if (b == 9)
      {
        a++;
        b = 0;
        c = 0;
      }
      else
      {
        b++;
        c = 0;
      }
    }
    else
    {
      c++;
    }
    
  }
  return 0;
}
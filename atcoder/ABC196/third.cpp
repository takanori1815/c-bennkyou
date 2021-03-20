#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  if (n < 11)
  {
    cout << 0 << endl;
  }
  else if (n < 100)
  {
    if (n / 10 <= n % 10)
    {
      cout << n / 10 << endl;
    }
    else
    {
      cout << n / 10 - 1 << endl;
    }
  }
  else if (n < 1000)
  {
    cout << 9 << endl;
  }
  else if (n < 10000)
  {
    if (n / 100 <= n % 100)
    {
      cout << n / 100 << endl;
    }
    else
    {
      cout << n / 100 - 1 << endl;
    }
  }
  else if (n < 100000)
  {
    cout << 99 << endl;
  }
  else if (n < 1000000)
  {
    if (n / 1000 <= n % 1000)
    {
      cout << n / 1000 << endl;
    }
    else
    {
      cout << n / 1000 - 1 << endl;
    }
  }
  else if (n < 10000000)
  {
    cout << 999 << endl;
  }
  else if (n < 100000000)
  {
    if (n / 10000 <= n % 10000)
    {
      cout << n / 10000 << endl;
    }
    else
    {
      cout << n / 10000 - 1 << endl;
    }
  }
  else if (n < 1000000000)
  {
    cout << 9999 << endl;
  }
  else if (n < 10000000000)
  {
    if (n / 100000 <= n % 100000)
    {
      cout << n / 100000 << endl;
    }
    else
    {
      cout << n / 100000 - 1 << endl;
    }
  }
  else if (n < 100000000000)
  {
    cout << 99999 << endl;
  }
  else if (n < 1000000000000)
  {
     if (n / 1000000 <= n % 1000000)
    {
      cout << n / 1000000 << endl;
    }
    else
    {
      cout << n / 1000000 - 1 << endl;
    }
  }else if(n == 1000000000000){
    cout << 999999 << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n, x;
  cin >> n >> x;
  int u = 0;
  for (char y = 'A'; y <= 'Z'; y++)
  {

    for (int i = 0; i < n; i++)
    {
      u++;
      if (u == x)
      {
        cout << y << endl;
        break;
      }
    }
  }
}

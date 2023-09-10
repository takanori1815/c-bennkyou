#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int v, a, b, c;
  cin >> v >> a >> b >> c;
  while (true)
  {

    if (v - a < 0)
    {
      cout << "F" << endl;
      return 0;
    }
    else
    {
      v = v - a;
      if (v - b < 0)
      {
        cout << "M" << endl;
        return 0;
      }
      else
      {
        v = v - b;
        if (v - c < 0)
        {
          cout << "T" << endl;
          return 0;
        }else{
          v= v-c;
        }
      }
    }
  }
}
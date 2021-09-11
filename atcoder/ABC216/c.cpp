#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  deque<char> d;
  if (n <= 120)
  {
    for (int i = 0; i < n; i++)
    {
      cout << 'A';
    }
  }
  else
  {

    while (n != 0)
    {
      if (n % 2 == 0)
      {
        n = n / 2;
        d.push_back('B');
      }
      else
      {
        n = n - 1;
        d.push_back('A');
      }
    }
  }
  int ryou = d.size();
  for(int i = 0; i< ryou; i++){
    cout << d.back();
    d.pop_back();
  }
  cout << endl;
  return 0;
}
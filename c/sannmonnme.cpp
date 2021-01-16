#include <iostream>
#include <string>
using namespace std;

char base36(int x)
{
  if (x < 10)
    return '0' + x;
  return 'A' + x - 10;
}

int main()
{
  int n;
  cin >> n;
  if (n == 0)
  {
    cout << "0" << endl;
    return 0;
  }
  string ans;
  while (n)
  {
    ans = base36(n % 36) + ans;
    n /= 36;
  }
  cout << ans << endl;
}
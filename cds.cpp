#include <iostream>
using namespace std;
int main()
{
  char s[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> s[i];
  }
  for (int i = 0; i < 3; i++)
  {
    if (s[i] == 'o' && s[i + 1] == 'o' && s[i + 2] == 'o')
    {
      cout << 'o' << endl;
      return 0;
    }
  }
  for (int i = 0; i < 3; i++)
  {
    if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
    {
      cout << 'x' << endl;
      return 0;
    }
  }
  cout << "draw" << endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<char> vec(12);
  int count = 0;
  for (int i = 0; i < 12; i++)
  {
    cin >> vec.at(i);
  }
  for (int i = 0; i < 8; i++)
  {
    if (vec.at(i) == 'Z')
    {
      if (vec.at(i+1) == 'O')
      {
        if (vec.at(i+2) == 'N')
        {
          if (vec.at(i+3) == 'e')
          {
            count++;
          }
          else
          {
            continue;
          }
        }
        else
        {
          continue;
        }
      }
      else
      {
        continue;
      }
    }
    else
    {
      continue;
    }
  }
  cout << count << endl;
}
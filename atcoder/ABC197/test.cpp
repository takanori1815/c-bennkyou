#include <bits/stdc++.h>
using namespace std;

int main()
{
  int g, w, x, y;
  cin >> g >> w >> x >> y;
  vector<vector<char>> data(g, vector<char>(w));
  for (int i = 0; i < g; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> data.at(i).at(j);
    }
  }
  int count = 1; 
  for (int i = 1; i <w-y ; i++)
  {
    if (data.at(x-1).at(y-1-i) == '.')
    {
      count++;
    }else{
      break;
    }
  }
  cout << count <<endl;
  }
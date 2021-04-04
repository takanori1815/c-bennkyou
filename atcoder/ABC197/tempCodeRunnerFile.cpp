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

  for (int i = x ; i < g; i++)
  {
    if (data.at(i).at(y) == '.')
    {
      count++;
    }else{
      break;
    }
  }
  if(w != x){
  for (int i = g - x - 1; i >= 0; i--)
  {
    if (data.at(i).at(y) == '.')
    {
      count++;
    }else{
      break;
    }
  }}
  for (int i = y ; i < w; i++)
  {

    if (data.at(x).at(i) == '.')
    {
      count++;
    }else{
      break;
    }
  }
  for (int i = w - y - 1; i >= 0; i--)
  {

    if (data.at(x).at(i) == '.')
    {
      count++;
    }else{
      break;
    }
  }

  cout << count << endl;
}

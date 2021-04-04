#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w, x, y;
  cin >> h >> w >> x >> y;
 char a[120][120];
  for(int i = 0; i<h; i++){
    cin >> a[i];
  }
  int cnt = -3;
  for (int i = x; i < h && a[i][y] != '#'; i++) cnt++;
	for (int i = x; i >= 0 && a[i][y] != '#'; i--) cnt++;
	for (int j = y; j < w && a[x][j] != '#'; j++) cnt++;
	for (int j = y; j >= 0 && a[x][j] != '#'; j--) cnt++;
  cout << cnt << endl;
}
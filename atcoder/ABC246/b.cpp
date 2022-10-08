#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

  int x,y;
  cin >> x >> y;
  double theta=atan2((double)y,(double)x);
  cout << cos(theta) << ' ' << sin(theta) << '\n';
  return 0;
}
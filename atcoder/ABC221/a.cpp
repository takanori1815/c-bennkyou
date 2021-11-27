#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int a,b; cin >> a >> b;
  int ans;
  ans = pow(32,(a-b));
  if(ans == 0){
    cout << 1 << endl;
  return 0;
  }
  cout << ans << endl;
  return 0;
}
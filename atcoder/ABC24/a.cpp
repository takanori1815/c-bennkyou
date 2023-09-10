#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

  double a,b,c,x; cin >> a >> b >> c >> x;
  double ans = 0;
  if(x<=a){
ans =1;
  }else if(x> b){
    ans = 0;
    }else{
ans = c/(b-a);
  
  }
  cout << ans << endl;
  return 0;
}
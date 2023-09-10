#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> H(n);
  for(int i= 1; i<=n; i++){
cin>> H[i];
  }
 int ans;
  ans= H[1];
   for(int i= 2; i<=n; i++){
if(H[i]>ans){
  ans = H[i];
}else{
  break;
}
  }
cout << ans << endl;
}
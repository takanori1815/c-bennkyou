#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  vector<string> s(n);
  vector<string> t(n);
  for(int i = 0; i < n; i++){
    cin >> s[i] >> t[i];
  }
  for(int i = 0; i < n; i++){
    for(int j = n-1; j > i; j--){
if(s[i] == s[j] && t[i] == t[j]){
  cout << "Yes" << endl;
  return 0;
}
    }
  }
cout << "No" << endl;
}
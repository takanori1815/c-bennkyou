#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;cin >> n;
  vector<int> a(n); 
  vector<int> b(n); 
  long long j = 0;
  for(int i = 0; i < n; i++){
cin >> a.at(i);
  }
for(int i = 0; i < n; i++){
  for(int k = 0; k > i; k--){
    b.at(i) = a.at(i)- a.at(k);
    j += b.at(i)*b.at(i);
}
cout << j << endl;
}}
#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n; cin >> n;
  vector<long long > s(n);
   vector<long long > t(n);
   for(int i = 0; i< n; i++){
     cin >> s[i];
   }
    for(int i = 0; i< n; i++){
     cin >> t[i];
   }
vector<long long> memo = t;
 for(int i = 0; i < n*2; i++) memo[(i+1)%n] = min(memo[(i+1)%n], memo[i%n] + s[i%n]);
 for(int ans: memo) cout << ans << endl;
}
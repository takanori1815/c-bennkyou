#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n; cin >> n;
  long long count = 0;
vector<long long> a(1000000);

  for(long long i = 2; i*i <= n; i++){ 
    if(a.at(i) == 1){
    continue;
  }
    for(long long k=i*i; k<=n; k *= i){
  if(k <= 100000)a.at(k) = 1;
 count++;
    }
  
  
  }

cout << n-count << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
    long long count=0;
    for(int i = 0; i<n; i++){
      long long a,b;
      cin >> a >> b;
     count += b * (b + 1) / 2 - a * (a - 1) / 2;
    }
    cout << count << endl;

}
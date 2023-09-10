#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >>n;
  int A[210];
   for (int i = 0; i < n; ++i) cin >> A[i];

    int res = 0;

    
    while (true) {
        bool exist_odd = false;  
        for (int i = 0; i < n; ++i) {
            if (A[i] % 2 != 0) exist_odd = true;  // 奇数があったらフラグを立てる
        }

        if (exist_odd) break;  // 奇数があったら break

        
        for (int i = 0; i < n; ++i) {
            A[i] /= 2;
        }
        ++res;  
    }

    cout << res << endl;

}
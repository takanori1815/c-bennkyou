#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
     vector<int> x(3), y(3);
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
    cout << (x[0] ^ x[1] ^ x[2]) << " " << (y[0] ^ y[1] ^ y[2]) << endl;
    return 0;

  
}
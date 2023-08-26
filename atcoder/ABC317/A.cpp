#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int n,h,x;
cin >> n >> h >> x;
int u = 0;
vector<int> P(n);
for (int i = 0; i < n; i++) {
  u = h;
  cin >> P.at(i);
  if(u+P.at(i)>x){
    cout << i+1 << endl;
    return 0;
  }
}

return 0;

}
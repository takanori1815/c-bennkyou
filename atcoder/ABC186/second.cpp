#include <bits/stdc++.h>
using namespace std;
int main() {
int h,w; cin >> h >> w;
vector<vector<int>> a(h, vector<int>(w));
for(int i = 0; i< h; i++){
  for(int j= 0; j< w; j++){
    cin >> a.at(i).at(j);
  }
}
 *max_element(a.begin(),a.end());
}
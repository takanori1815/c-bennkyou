#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

  int n,m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(n);
  int ans=0;
  for(int i=0;i<n;i++){
    cin>>a.at(i);
  }
  for(int j=0;j<m;j++){
    cin >> b.at(j);
    ans+=a.at(b.at(j)-1);
  }
  cout << ans << endl;
   
}
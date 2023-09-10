#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

ll n,m; cin >> n >> m;
vector<ll> a(n);
vector<ll> b(m);
for(int i =0;i< n;i++){
  cin >> a.at(i);
}
for(int i =0;i< m;i++){
  cin >> b.at(i);
}
for(int i = 0; i< m; i++){
  for(int j = 0; j<n;j++){
    if(b.at(i)==a.at(j)){
      a.at(j)= 0;
      break;
    }else if(j ==n-1){
      cout << "No" << endl;
      return 0;
    }
  }
}
cout << "Yes" << endl;
return 0;
}
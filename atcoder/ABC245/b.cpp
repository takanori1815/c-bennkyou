#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i< n;i++){
cin >> a.at(i);
  }
   for(ll ans=0;ans<=n;ans++){
        bool one=true;
        for(ll x:a){
            if(x==ans)one=false;
        }
        if(one){
            cout<<ans<<endl;
            return 0;
        }
    }
    return 0;
}
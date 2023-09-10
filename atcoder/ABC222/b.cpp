#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int n,p; cin >> n >> p;
  vector<int> a(n);
  int count = 0;
  for(int i = 0; i< n; i++){
    cin >> a[i];
    if(a[i] < p){
      count++;
    }
  }
  cout << count << endl;
}
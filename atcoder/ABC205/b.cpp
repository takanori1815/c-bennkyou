#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; 
  cin >> n;
  vector<int> a(n+1);
  for(int i  = 1; i< n+1; i++){
    cin >> a.at(i); 
  }
  for(int i  = 1; i< n+1; i++){
    for(int j = 1; j < n+1; j++){
      if(i == a.at(j)){
        break;
      }
      else if(j == n){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}
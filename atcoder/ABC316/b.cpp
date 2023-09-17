#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int m;
  cin >> m;
  vector<int> D{m+1};
  int total = 0;
  int mid = 0;

  for(int i =0; i<m; i++){
    cin >> D.at(i);
    total += D.at(i);
  }
  mid= (total+1)/2;

  for(int i =0; i<m; i++){
    if(mid <= D[i]){
      cout << i+1;
      cout << " ";
      cout << mid <<endl;
      return 0;
    }else{
    mid -= D.at(i);
    }
    
  }  
  


}
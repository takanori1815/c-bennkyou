#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;cin >> x;
  if(x < 100){
    x = 100+x;
  }
  for(int i = 0; i < 1000000; i++){
  x = x - 100;
  if(x <= 100){
  break;
  }}
  if(x == 100){
cout << x << endl;
  }else{
    cout << 100-x << endl;
  }

}
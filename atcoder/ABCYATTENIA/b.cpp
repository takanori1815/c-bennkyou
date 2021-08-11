#include <bits/stdc++.h>
using namespace std;
int main() {
  double a ,b,c,d;
  cin >> a >> b >> c >>d;
  double sdf;
  
  sdf= c*d -b;
  if( sdf<  0){
    cout << "-1" << endl;
    return 0;
}
int i = 0;
while (true){

i++;

if(a/i <= (sdf)){
  cout << i << endl;
  return 0;
break;
}
}
}
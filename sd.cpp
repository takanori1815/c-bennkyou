#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  int a,b;
  cin >> x;
  for(a=1;a<=9;a++)for(b=1;b<=9;b++){
    if( a * b == x){
      cout << "Yes" << endl;
      break;
    }
  }
  cout << "No" << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  string a; cin >>a;
  for(int i = 0; i< a.size(); i++){
    
if(a.at(i) == '.' ){
  cout << endl;
  return 0;
}
cout<< a.at(i);
  }
 cout << endl;
}
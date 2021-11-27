#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  string n; cin>>n;
  int a = n.length();
  for(int i = 0; i< 4-a; i++){
 cout << "0" ;
  }
  cout << n << endl;
}
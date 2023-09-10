#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int a,b,c,d;cin>>a;
  b=a/100;
  c=a/10-b*10;
  d=a-b*100-c*10;

  a= b+c+d;
  cout << 100*a+10*a+a<<endl;
}
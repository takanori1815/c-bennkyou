#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  vector<int> a(10);
for(int i = 0; i< 10 ;i++){
  cin >> a.at(i);
  
}
int x = 0;
for(int i= 0; i< 3; i++){
  x = a.at(x);
}
cout << x << endl;
return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  string s; cin >> s;
  int a = s.size();
   char tmp;
 sort(s.begin(),s.end());
  
  for (int i = 0; i < a; ++i) {
    cout << s[i] ;
  }
cout << endl;
  return 0;
}
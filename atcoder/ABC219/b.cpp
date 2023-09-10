#include <bits/stdc++.h>
using namespace std;
int main() {
 string s1,s2,s3; cin >> s1 >> s2 >> s3;
 string T; cin >> T;
 int n = T.length();
 for(int i = 0; i< n; i++){
   if(T.at(i) == '1'){
     cout << s1;
   }else if(T.at(i) == '2'){
     cout << s2;
   }else{
     cout << s3;
   }
 }
cout << endl;
return 0;
}
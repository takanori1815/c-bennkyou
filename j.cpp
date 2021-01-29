#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >>n;
vector<string> vec(n);
int sum=0;
int can =1;
for(int i = 0; i < n; i++){
  cin >> vec.at (i); 
}
for(int i = 0; i < n; i++){
 if(i == n-1){
   if(vec.at (i) == "OR"){
     sum = sum * 2 -1;
   }else{
     sum; 
   }
 }
 if(vec.at (i) == "AND"){
   
   sum = sum + 1;
 }else if(vec.at (i) == "OR"){
   sum = sum *2;
   can = can * 2;
}

}
}
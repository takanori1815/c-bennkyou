#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  if(n<1000){
 cout << 0<< endl;
  }else if (n < 1000000){
   cout << n- 999<< endl;
  }else if(n<1000000000){
    cout << (n-999)+(n-999999)<<endl;
  }else if(n<1000000000000){
    cout << (n-999)+(n-999999)+(n-999999999)<<endl;
  }else  if(n<1000000000000000){
    cout << (n-999)+(n-999999)+(n-999999999)+(n-999999999999)<<endl;
  }else{
    cout <<(n-999)+(n-999999)+(n-999999999)+(n-999999999999)+1<<endl;
  }

}
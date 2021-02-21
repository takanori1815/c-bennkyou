#include <bits/stdc++.h>
using namespace std;
int f(int n){
  int sum=0;
  while(n) {
    sum = sum + n%10;
		n/=10;
	}
  return sum;
}
int main() {
  int a,b;
  cin >> a >> b;
  if(f(a)>= f(b)){
    cout<< f(a)<<endl;
  }else{
    cout<< f(b) << endl;
  }
  
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;cin >> n ;
  long long a [100010];
  for(int i = 0; i<n; i++)cin >> a[i];
  int zero =0;
  for(int i=0;i<n;i++)if(a[i]==0) zero ++;
if(zero >0){
printf("0\n");
return 0;
}
long long prod =1;
for(int i=0;i<n;i++){
if(a[i ] <=1000000000000000000/ prod ){
// This condition is equivalent to prod*a[i] <=10ˆ18
prod *=a[i];
}else{
cout <<"-1"<<endl;;
return 0;
}
}
printf("%lld\n",prod );
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int a,b,c,d;
cin >> a >> b >> c >> d;

if(a>c){
cout << "Aoki" << endl;
}else if(a<c){
cout << "Takahashi" << endl;
}else{
if(b<=d){
cout << "Takahashi" << endl;
}else{
cout << "Aoki" << endl;
}
}


return 0;
}

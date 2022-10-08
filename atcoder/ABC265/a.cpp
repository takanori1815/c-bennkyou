#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int x,y,n;
cin >> x >> y >> n;
int z;
z= n/3;
int k;
k=n%3;

cout <<min( (y*z +x*k),x*n)<<endl;


}
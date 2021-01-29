#include <bits/stdc++.h>
using namespace std;
int main() {

int n;cin >>n;
 vector<int> vec(n);
 vector<int> vec1(n);
 for(int i = 0; i< n; i++){
   cin >> vec.at(i);
 }
 sort(vec.begin(), vec.end());
for(int i = 0; i< n; i++){
   vec1.at(i) =vec.at(i)*(n-i);
}
 sort(vec1.begin(), vec1.end());
 
 cout << vec1.at(n-1) << endl;
}
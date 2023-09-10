#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector <int> a(n);
  int wakaran = -1;
  int siran = 1000000;
  for(int i = 0; i< n; i++){
    if(a[i] < siran) siran = a[i];
    if(a[i] > wakaran) wakaran = a[i]; 
  }
  

}
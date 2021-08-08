#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin >> n;
  vector<long long> a(n);
  map<long long, int> nanka;
  for(long long i = 0; i< n; i++){
    cin >> a.at(i);
    nanka[a.at(i)] = i;
  }
  sort(a.begin(),a.end());
  reverse(a.begin(), a.end());
  cout << nanka[a.at(1)]+1 << endl;


}
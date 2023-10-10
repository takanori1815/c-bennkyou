#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  int Alice = 0;
  int Bob = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      Alice += a.at(i);
    } else {
      Bob += a.at(i);
    }
  }
  cout << Alice - Bob << endl;
}
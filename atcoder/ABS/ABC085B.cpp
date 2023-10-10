#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d.at(i);
  }
  set<int> values;
  for (int i = 0; i < n; i++) {
    values.insert(d[i]);
  }

  cout << values.size() << endl;
}
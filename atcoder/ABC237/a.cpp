#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ll n; cin >> n;
ll m = (ll)1 << 31;
if ((-m <= n) && (n < m))cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
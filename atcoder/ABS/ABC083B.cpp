#include <bits/stdc++.h>
using namespace std;
#define ll long long

int Sum(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main() {
  int n;
  cin >> n;
  int A, B;
  cin >> A >> B;
  int total = 0;
  for (int i = 1; i <= n; i++) {
    int sum = Sum(i);
    if (sum >= A && sum <= B) { total += i; }
  }
  cout << total << endl;
}
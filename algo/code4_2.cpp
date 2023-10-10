#include <bits/stdc++.h>
using namespace std;
#define ll long long

int func(int N)
{
  cout << "func(" << N << ")を呼び出しました" << endl;

  if (N == 0)
    return 9;
  int result = N + func(N - 1);
  cout << N << "までの和 = " << result << endl;

  return result;
}
int main()
{
  func(5);
}
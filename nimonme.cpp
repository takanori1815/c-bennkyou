#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  string T = "";
  for (int i = N - 1; i >= 0; i--)
  {
    bool ok = true;
    for (int j = 0; j < T.size(); j++)
    {
      if (S[i] == T[j])
      {
        ok = false;
      }
    }
    if (ok)
    {
      T = S[i] + T;
    }
  }

  cout << T << endl;
}

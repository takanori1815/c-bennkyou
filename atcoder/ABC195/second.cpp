#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long A, B, W;
  cin >> A >> B >> W;
  W = W * 1000;
  if(W/A==W/B && W%A !=0 && W%B != 0){
    cout << "UNSATISFIABLE"<< endl;
    return 0;
  }
  if (W % B == 0)
  {
    cout << W / B << " ";
  }
  else
  {
    cout << W / B+1  << " ";
  }
 
    cout << W / A << endl;
  
}

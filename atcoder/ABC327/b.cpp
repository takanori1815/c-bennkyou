#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  string b;
  cin >> b;
  vector<string> a(17);
  a.at(0) = "1";
  a.at(1) = "4";
  a.at(2) = "27";
  a.at(3) = "256";
  a.at(4) = "3125";
  a.at(5) = "46656";
  a.at(6) = "823543";
  a.at(7) = "16777216";
  a.at(8) = "387420489";
  a.at(9) = "10000000000";
  a.at(10) = "285311670611";
  a.at(11) = "8916100448256";
  a.at(12) = "302875106592253";
  a.at(13) = "11112006825558016";
  a.at(14) = "437893890380859375";
  a.at(15) = "18446744073709551616";
  for (int i = 0; i < 16; i++)
  {

    if (b == a.at(i))
    {
      cout << i +1<< endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
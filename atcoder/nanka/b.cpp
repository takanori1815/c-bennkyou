#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }
  int max = 0;
	int res = -1;
for(int j = 2; j< 1000; j++ ){
  int cnt = 0;
  for(int i = 0; i< n; i++){
if (a.at(i) % j == 0) cnt++;
  }
  if (max < cnt) max = cnt, res = j;
}
cout << res << endl;
return 0;
}
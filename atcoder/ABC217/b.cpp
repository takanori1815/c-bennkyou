#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<int, char> score;
  
  score[1] = 'a';
  score[2] = 'b';
  score[3] = 'c';
  score[4] = 'd';
  score[5] = 'e';
  score[6] = 'f';
  score[7] = 'g';
  score[8] = 'h';
  score[9] = 'i';
  score[10] = 'j';
  score[11] = 'k';
  score[12] = 'l';
  score[13] = 'm';
  score[14] = 'n';
  score[15] = 'o';
  score[16] = 'p';
  score[17] = 'q';
  score[18] = 'r';
  score[19] = 's';
  score[20] = 't';
  score[21] = 'u';
  score[22] = 'v';
  score[23] = 'w';
  score[24] = 'x';
  score[25] = 'y';
  score[26] = 'z';
  for(int i= 1;i< 27; i++ ){
    int a;cin>> a;
    cout << score.at(a);
  }
  cout << endl;
}
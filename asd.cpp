#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  srand(time(NULL));
  int lucky = rand() % 10;
  cout << "今日のラッキーナンバーは" << lucky << "です。\n";
  

}
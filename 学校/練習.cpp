#include <stdio.h>
void BetrothedNumJudge(int x, int y)
{
  int i, s=0, p=0;
  for (i = 2; i < x; i++)
  {
    if (x % i == 0)
    {
      s = s + i;
    }
  }
  for (i = 2; i < y; i++)
  {
    if (y % i == 0)
    {
      p = p + i;
    }
  }
  if (s == y && p == x)
  {
    printf("この二つの数は婚約数です。\n");;
  }
  else
  {
    printf("この二つの数は婚約数ではありません。\n");
  }
}

int main(void)
{
  int a, b;
  int x;
  printf(">>婚約数判断プログラム<<\n\n");
  printf("一つ目の自然数を入力してください:");
  scanf("%d", &a);
  printf("二つ目の自然数を入力してください:");
  scanf("%d", &b);
  BetrothedNumJudge(a, b);
}
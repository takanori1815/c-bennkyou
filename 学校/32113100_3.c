/*32113100 杉山貴紀*/
#include <string.h>
#include <stdio.h>

int str_chnum(const char *s, char c)
{
  int count = 0;/**/
  int i;
  for (i = 0; i < strlen(s); i++)
  {
    if (c == *(s + i))
      count++;
  }
  return count;
}

int main(void)
{
  char s[101];
  printf("100文字までの文字列を入力してください\n");
  scanf("%s", s);
  while (1)
  {
    char c;
    int n;
    printf("調べる⽂字を⼊⼒してください。\n");
    scanf(" %c", &c);
    n = str_chnum(s, c);
    printf("文字列'%s'に'%c'は'%d'個含まれます。\n", s, c, n);
  }
  return 0;
}
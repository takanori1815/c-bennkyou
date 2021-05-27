#include <stdio.h>
#include <string.h>
char *fullname(char *surname, char *forename)
{
  char *x;
  x = surname;

  while (*x != '\0')
  {
    x++;
  }

  while (*forename != '\0')
  {
    *x++ = *forename++;
  }
  return (surname);
}

int main(void)
{
  int i;
  char s1[100];
  char s2[100];
  char s3[100];
  char a1[100];
  char a2[100];
  char a3[100];
  for (i = 1; i < 4; i++)
  {
    printf("input 学籍番号%d\n", i);
    printf("苗字を入力してください >> ");
    if (i == 1)
    {
      scanf("%s", s1);
    }
    else if (i == 2)
    {
      scanf("%s", s2);
    }
    else if (i == 3)
    {
      scanf("%s", s3);
    }
    printf("名前を入力してください >> ");
    if (i == 1)
    {
      scanf("%s", a1);
    }
    else if (i == 2)
    {
      scanf("%s", a2);
    }
    else if (i == 3)
    {
      scanf("%s", a3);
    }
    continue;
  }
  char w1[100];
  char w2[100];
  char w3[100];
  strncpy(w1, s1, strlen(s1));
  strncpy(w2, s2, strlen(s2));
  strncpy(w3, s3, strlen(s3));
  while (1)
  {
    int j;
    printf("学籍番号を入力してください　>> ");
    scanf("%d", &j);
    int pattern;
    printf("input 1:名字 2:名前 3:両⽅ >> ");
    scanf("%d", &pattern);
    /* 出⼒ */
    if (j == 1)
    {
      if (pattern == 3)
      { /* 名字と名前を出⼒ */
        printf("%s\n", fullname(w1, a1));
      }
      else if (pattern == 2)
      {
        printf("%s\n", a1);
      }
      else
      {
        printf("%s\n", s1);
      }
    }
    else if (j == 2)
    {
      if (pattern == 3)
      { /* 名字と名前を出⼒ */
        printf("%s\n", fullname(w2, a2));
      }
      else if (pattern == 2)
      {
        printf("%s\n", a2);
      }
      else
      {
        printf("%s\n", s2);
      }
    }
    else
    {
      if (pattern == 3)
      { /* 名字と名前を出⼒ */
        printf("%s\n", fullname(w3, a3));
      }
      else if (pattern == 2)
      {
        printf("%s\n", a3);
      }
      else
      {
        printf("%s\n", s3);
      }
    }
  }
  return 0;
}
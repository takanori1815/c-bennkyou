/*32113100 杉山貴紀*/
#include <stdio.h>
double Solve_x1(double x[])
{
  double y;
  if (x[1] == 0)
  {
    y = x[4] / x[0];
  }
  else if (x[3] == 0)
  {
    y = x[5] / x[2];
  }
  else if (x[4] == 0)
  {
    y = 0;
  }
  else
  {
    y = (x[4] * x[3] - x[5] * x[1]) / (x[0] * x[3] - x[2] * x[1]);
  }
  return y;
}
double Solve_x2(double x[])
{
  double z;
  if (x[0] == 0)
  {
    z = x[4] / x[1];
  }
  else if (x[2] == 0)
  {
    z = x[5] / x[3];
  }
  else if (x[4] == 0)
  {
    z = 0;
  }
  else
  {
    z = (x[0] * x[5] - x[2] * x[4]) / (x[0] * x[3] - x[2] * x[1]);
  }
  return z;
}
int main(void)
{
  double COE[6];
  double x1, x2;
  printf("方程式の係数を入力してください：\n");
  printf("A=");
  scanf("%lf", &COE[0]);
  printf("B=");
  scanf("%lf", &COE[1]);
  printf("C=");
  scanf("%lf", &COE[2]);
  printf("D=");
  scanf("%lf", &COE[3]);
  printf("P=");
  scanf("%lf", &COE[4]);
  printf("Q=");
  scanf("%lf", &COE[5]);
  x1 = Solve_x1(COE);
  x2 = Solve_x2(COE);
  printf("方程式の解は:\n");
  printf("x1= %.2f\n", x1);
  printf("x2= %.2f\n\n", x2);
}
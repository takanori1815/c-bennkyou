#include <stdio.h>
#include <math.h>

/*天井と床を求める*/
void cf(double x, double r, int *low, int *high){

*low = ceil(x-r);
*high = floor(x+r);
}

int main(void){

double a,b,r,p;
int start,end,top,bottom,i,j,num;

num=0;

scanf("%lf %lf %lf",&a,&b,&r);

cf(a,r,&start,&end);

for(i=start;i<=end;i++){

p = sqrt(pow(r,2)-pow((a-(double)i),2));

cf(b,p,&bottom,&top);

for(j=bottom;j<=top;j++){
num = num + 1;
}

}
printf(" %d \n",num);

return 0;
}
/*32113100 杉山貴紀*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#define Xsize 10
#define Ysize 10
int main(void)
{
	int x;
	int v[Xsize][Ysize]={0};/* 配列の初期化 */
	int i,j;
	int A;/* 1の限度 */
	int counter=0;/* 1が何個あるか */
	A = ((Xsize * Ysize)/10)*3;
	srand( (int)time(NULL) ); /* 乱数SEED設定*/
	printf("迷路マップ\n");
	for(i=0; i<Xsize; i++){
		for(j=0; j<Ysize; j++){
			v[i][j]=rand( )% 2;
			if(v[i][j]==1){
			counter++;}
			if(counter >=A){
			v[i][j]=0;}
			}
		}
	v[Xsize-1][0]=9;
	v[0][Ysize-1]=8;
	for (i = 0; i < Xsize; i++) {
		for (j = 0; j < Ysize; j++) {
		printf("%2d",v[i][j]);
		}
		printf("\n");
	}
	return 0;
}
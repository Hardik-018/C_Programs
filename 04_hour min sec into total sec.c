#include<stdio.h>
#include<conio.h>
int main(){
	int h,m,s,ts;
	h=2; m=180; s=999;
	ts=(h*3600)+(m*60)+s;
	printf("total seconds = %d",ts);
	return 0;
}

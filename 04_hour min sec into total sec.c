#include<stdio.h>
#include<conio.h>
int main(){
	int hh,mm,ss,ts;
	printf("Enter time in hh:mm:ss format:");
	scanf("%d:%d:%d", &hh,&mm,&ss);
	ts=(hh*3600)+(mm*60)+ss;
	printf("total seconds = %d",ts);
	return 0;
}

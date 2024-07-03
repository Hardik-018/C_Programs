#include<stdio.h>
#include<conio.h>
int main(){
	int h,m,s,ts;
	printf("Enter Total Seconds: ");
	scanf("%d", &ts);
	h=ts/3600;
	ts=ts%3600; m=ts/60; s=ts%60;
	printf("Hours are %d \nMinutes are %d \nSeconds are %d", h,m,s);	
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	int n;  //n Stands For Number Of Phone Calls.
	float bill;
	printf("Enter Number Of Phone Calls Made:");
	scanf("%d", &n);
	if(n>=0 && n<=100)
		bill=0+100;
	else if(n>=101 && n<=200)
		bill=n*(8/10.0)+100;
	else if(n>=201 && n<=500)
		bill=n*1+100;
	else if(n>=501)
		bill=n*(12/10.0)+100;
	printf("Your Bill For This Month Is:%.2f Rupees", bill);	
	return 0;
}

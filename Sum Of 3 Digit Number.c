#include<stdio.h>
#include<conio.h>
int main(){
	int n,f,m,l,td;
	printf("Enter 3 digit no.");
	scanf("%d", &n);
	f=n/100; m=n/10%10; l=n%10;
	//td=Total Of Digits
	td=f+m+l;
	printf("total of digits = %d", td);	
	return 0;
}

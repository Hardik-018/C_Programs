#include<stdio.h>
#include<conio.h>
int main (){
	int n,d,r;
	float q;
	printf("Enter 'N'and 'D':");
	scanf("%d %d", &n,&d);
	q=n/d; r=n%d;
	printf("qoutient is % .2f \nremainder is %d", q,r);
	return 0;
	}

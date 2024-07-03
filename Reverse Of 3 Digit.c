#include<stdio.h>
#include<conio.h>
int main(){
	//n is a 3 dit number
	int n,f,m,l,t,sum;
	printf("Enter Three Digit Number:");
	scanf("%d", &n);
	f=n/100; m=n/10%10; l=n%10;
	t=f; f=l; l=t;
	printf("Reverse is %d %d %d", f,m,l);
	sum=f+m+l;
	printf("\nSum is %d", sum);
	return 0;
}

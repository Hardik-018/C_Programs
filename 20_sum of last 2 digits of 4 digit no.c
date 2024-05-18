#include<stdio.h>
#include<conio.h>
int main(){
	//n is a four digit number
	int n,f,l,sum;
	printf("Enter Four digit Number:");
	scanf("%d", &n);
	f=n/1000; l=n%10;
	sum=f+l;
	printf("Sum Of Frist And Last Digit Is %d", sum);
	return 0;
}

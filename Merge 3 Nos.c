#include<stdio.h>
#include<conio.h>
int main(){
	int n,a,b,c;
	printf("Enter 3 Digits A,B,C:");
	scanf("%d,%d,%d", &a,&b,&c);
	n=a*100+b*10+c;	
	printf("3 Digit number=%d", n);	
	return 0;
}

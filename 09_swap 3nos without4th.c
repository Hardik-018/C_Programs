#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("Enter 'A':");
	scanf("%d", &a);
	printf("Enter 'B':");
	scanf("%d", &b);
	printf("Enter 'C':");
	scanf("%d", &c);
	a=a+b+c; c=a-b-c; b=a-b-c; a=a-b-c;
	printf("%d,%d,%d", a,b,c);
	return 0;
}

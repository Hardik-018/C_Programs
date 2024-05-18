#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("Enter 'A' and 'B':");
	scanf("%d %d", &a,&b);
	b=a-b+(a=b);
	printf("%d,%d", a,b);
	return 0;
}

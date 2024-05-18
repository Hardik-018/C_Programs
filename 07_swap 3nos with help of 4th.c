#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,t;
	printf("Enter 'A': ");
	scanf("%d", &a);
	printf("Enter 'B': ");
	scanf("%d", &b);
	printf("Enter 'C': ");
	scanf("%d", &c);
	t=a; a=b; b=c; c=t;
	printf("%d,%d,%d", a,b,c);
		
	return 0;
}

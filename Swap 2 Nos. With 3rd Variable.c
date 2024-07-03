#include<stdio.h>
#include<conio.h>
int main (){
	int a,b,t;
	printf("Enter 'A': ");
	scanf("%d",&a);
	printf("Enter 'B': ");
	scanf("%d",&b);
	t=a; a=b; b=t;
	printf("%d,%d", a,b);
	return 0;
}

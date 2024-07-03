#include<stdio.h>
int main(){
	int a,b;
	printf("Enter Two Number:");
	scanf("%d%d", &a,&b);
	printf("Max Number Is %d.",a>b?a:b);
	return 0;
}

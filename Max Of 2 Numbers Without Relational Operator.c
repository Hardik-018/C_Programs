#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,max;
	printf("Enter 2 Numbers:");
	scanf("%d %d",&a,&b);
	max=(a+b+abs(a-b))/2;
	printf("Max Is %d.",max);
	return 0;
}

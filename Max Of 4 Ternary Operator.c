#include<stdio.h>
int main(){
	int a,b,c,d,max;
	printf("Enter Four Number:");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	max=a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
	printf("Max Number Is %d.",max);
	return 0;
}

#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int main(){
	int a,b;
	printf("Enter Two Numbers:");
	scanf("%d%d",&a,&b);
	printf("Max Is %d.",max(a,b));
	return 0;
}

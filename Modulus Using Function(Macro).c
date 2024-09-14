#include<stdio.h>
#define mod(a,b) ((a)%(b))
int main(){
	int a,b;
	printf("Enter Two Numbers:");
	scanf("%d%d", &a, &b);
	printf("Remainder Is %d.",mod(a,b));
	return 0;
}

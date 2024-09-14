#include<stdio.h>
#define sum(a,b) ((a)+(b))
int main(){
	int a,b;
	printf("Enter Two Numbers:");
	scanf("%d%d", &a, &b);
	printf("Sum Of %d And %d Is %d.", a, b, sum(a,b));
	return 0;
}

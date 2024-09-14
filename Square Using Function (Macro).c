#include<stdio.h>
#define sqr(a) ((a)*(a)
int main(){
	int n;
	printf("Enter the value of n :");
	scanf("%d", &n);
	printf("Square Of %d Is %d.", n, sqr(n));
	return 0;
}

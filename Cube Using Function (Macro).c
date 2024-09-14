#include<stdio.h>
#define cube(a) ((a)*(a)*(a))
int main(){
	int n;
	printf("Enter the value of n :");
	scanf("%d", &n);
	printf("Cube Of %d Is %d.", n, cube(n));
	return 0;
}

#include<stdio.h>
int fibbo(int n){
	if(n==0 || n==1){
		return n;
	}
	return fibbo(n-1)+fibbo(n-2);
}
int main(){
	int n;
	printf("Enter NUmber Of Term:");
	scanf("%d", &n);
	printf("The %dth Term OF Fibbonacci Series Is %d.", n, fibbo(n));
	return 0;
}

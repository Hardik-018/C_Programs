#include<stdio.h>
int isabsolute(int n){
	if(n<0){
		n=n*-1;
	}
	return n;
}
int main(){
	char n;
	printf("Enter A Digit:");
	scanf("%d", &n);
	printf("Absolute Value Is %d.", isabsolute(n));
	return 0;
}

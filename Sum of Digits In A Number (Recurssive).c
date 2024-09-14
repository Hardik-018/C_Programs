#include<stdio.h>
int sumdigit(int n){
	if(n<10){
		return n;
	}
	return n%10+sumdigit(n/10);
}
int main(){
	int n,p;
	printf("Enter A Number:");
	scanf("%d", &n);
	printf("Sum of Digits Is %d.", sumdigit(n));
	return 0;
}

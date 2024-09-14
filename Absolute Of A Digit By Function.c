#include<stdio.h>
int isabsolute(int n){
	if(n<0){
		n=n*-1;
	}
	return n;
}
int main(){
	char n, ans;
	printf("Enter A Digit:");
	scanf("%d", &n);
	ans=isabsolute(n);
	printf("Absolute Value Is %d.", ans);
	return 0;
}

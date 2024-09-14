#include<stdio.h>
int fact(n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int n,ans;
	printf("Enter A Number:");
	scanf("%d",&n);
	ans=fact(n);
	printf("Factorial Of %d is %d.",n,ans);
	return 0;
}

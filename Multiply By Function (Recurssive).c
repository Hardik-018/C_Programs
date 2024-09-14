#include<stdio.h>
int multi(int a, int b){
	if(a==0 || b==0){
		return 0;
	}
	return a+multi(a,b-1);
}
int main(){
	int a, b;
	printf("Enter Two Numbers:");
	scanf("%d%d", &a, &b);
	printf("Product Of %d And %d Is %d.", a, b, multi(a,b));
	return 0;
}

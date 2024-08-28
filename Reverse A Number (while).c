#include<stdio.h>
int main(){
	int n,rev;
	printf("Enter A Number:");
	scanf("%d",&n);
	rev=0;
	while(n!=0){
		rev=rev*10+n%10;
		n=n/10;
	}
	printf("Reversed Number Is %d.",rev);
	return 0;
}

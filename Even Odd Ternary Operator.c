#include<stdio.h>
int main(){
	int n;
	printf("Enter A Number:");
	scanf("%d",&n);
	printf(n%2==0?"Number Is Even.":"Number Is Odd.");
	return 0;
}

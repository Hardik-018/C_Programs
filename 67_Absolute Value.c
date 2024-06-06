#include<stdio.h>
int main(){
	int n;
	printf("Enter A Number:");
	scanf("%d",&n);
	if(n>=0){
		printf("%d",n);
	}
	else if(n<=0){
		printf("%d",n*-1);
	}
	return 0;
}

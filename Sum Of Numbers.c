#include<stdio.h>
int main(){
	int i,n,sum;
	printf("Enter A Number:");
	scanf("%d",&n);
	i=0;sum=0;
	while(n!=0){
		sum=sum+n%10;
		n=n-1;
	}
	printf("%d",sum);
	return 0;
}

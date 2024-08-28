#include<stdio.h>
int main(){
	int n,sum;
	printf("Enter 'N' Terms:");
	scanf("%d",&n);
	sum=0;
	while (n!=0){
		sum=sum+n%10;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}

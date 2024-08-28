#include<stdio.h>
int main(){
	long long int n,count;
	printf("Enter 'N' Terms:");
	scanf("%llu",&n);
//	printf("%llu\n",n);
	count=0;
	while (n!=0){
		n=n/10;
		count++;
	}
	printf("%llu",count);
	return 0;
}

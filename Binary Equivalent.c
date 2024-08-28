#include<stdio.h>
int main(){
	long long int n,rem;
	printf("Enter A Number:");
	scanf("%llu",&n);
	for(rem=0;n!=0;n=n/2){
		rem=n%2;
		printf("%llu",rem);
	}
	return 0;
}

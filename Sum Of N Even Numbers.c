#include<stdio.h>
int main(){
	int n,i,even,sum;
	printf("Enter Number Of Terms:");
	scanf("%d",&n);
	i=0; even=sum=0;
	while(i<=n){
		even=i*2;
		sum=sum+even;
		i++;
		printf("%d,",even);
	}
	printf("\b.");
	printf("\nSum of %d Even Terms Is %d.",n,sum);
	return 0;
}

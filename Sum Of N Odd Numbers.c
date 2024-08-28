#include<stdio.h>
int main(){
	int n,i,odd,sum;
	printf("Enter Number Of Terms:");
	scanf("%d",&n);
	i=0; odd=sum=0;
	while(i<=n){
		odd=i*2+1;
		sum=sum+(odd*odd*odd);
		i++;
		printf("%d,",odd);
	}
	printf("\b.");
	printf("\nSum of %d Odd Terms Is %d.",n,sum);
	return 0;
}

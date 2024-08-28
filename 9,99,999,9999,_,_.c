#include<stdio.h>
int main(){
	int i,n,count;
	printf("Enter 'N' Terms:");
	scanf("%d",&n);
	i=9;count=1;
	while(count<=n){
		printf("%d,",i);
		i=(i*10)+9;
		count++;
	}
	printf("\b.");
	return 0;
}

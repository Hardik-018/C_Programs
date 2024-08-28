#include<stdio.h>
int main(){
	int n,i;
	printf("Enter A Number:");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		printf("%d,",i);
		i++;
	}
	printf("\b ");
    return 0;	
}

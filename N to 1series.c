#include<stdio.h>
int main(){
	int i,n;
	printf("Enter A Number:");
	scanf("%d",&n);
	i=n;
	while(i>=1){
		printf("%d,",i);
		i--;
	}
	printf("\b ");
    return 0;
}

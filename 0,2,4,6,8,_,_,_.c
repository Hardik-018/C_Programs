#include<stdio.h>
int main(){
	int i,n;
	printf("Enter 'N' Terms:");
	scanf("%d",&n);
	i=0;
	while(i<=n){
		printf("%d,",(i*2));
		i++;
	}
	printf("\b.");
	return 0;
}

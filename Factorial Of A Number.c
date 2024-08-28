#include<stdio.h>
int main(){
	int i,n,fact;
	printf("Enter A Number:");
	scanf("%d",&n);
	for(i=n,fact=1;i>=1;i--){
	fact=fact*i;
    }
	printf("Factorial Of Number Is %u.", fact);
	return 0;
}

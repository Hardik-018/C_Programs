/*  *****
    *
    ***
    *
    *        */
#include<stdio.h>
int main(){
	int i,j,n,mid;
	printf("Enter Number Of Rows And Columns(Odd Only):");
	scanf("%d",&n);
	mid=(n+1)/2;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1 || i==1 || i==mid && j<=mid){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
 }
	return 0;
} 

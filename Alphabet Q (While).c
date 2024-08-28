/*  *****
    **  *
    * * *
    *  **
    *****
	     *    */ 
#include<stdio.h>
int main(){
	int i,n,j,mid;
	printf("Enter Numbrer Of Rows And Columns (Odd Only):");
	scanf("%d",&n);
	mid=(n+1)/2;
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i==1 && j<n-1|| j==1 && i<n-1|| j==n-1 && i<n-1 ||
			 i==n-1 && j<n-1|| i==j){
				printf("*");
			}
			else{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

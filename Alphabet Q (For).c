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
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 && j<n-1|| j==1 && i<n-1|| j==n-1 && i<n-1 ||
			 i==n-1 && j<n-1|| i==j){
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

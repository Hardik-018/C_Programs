/*  *****
    *
    * ***
    *   *
    *****     */
#include<stdio.h>
int main(){
	int i,j,n,mid;
	printf("Enter Number Of Rows And Columns(Odd Only):");
	scanf("%d",&n);
	mid=(n+1)/2;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 || j==1 || i==n || j==n && i>mid || i==mid && j>=mid){
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

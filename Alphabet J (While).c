/*  *****
      *
    * *
    * *
    ***    */
#include<stdio.h>
int main(){
	int i,j,n,mid;
	printf("Enter Number Of Rows And Columns(Odd Only):");
	scanf("%d",&n);
	i=1;
	mid=(n+1)/2;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i==1 || j==mid || i==n && j<mid || j==1 && i>mid){
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

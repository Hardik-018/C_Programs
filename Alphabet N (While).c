/*  *   *
    **  *
    * * *
    *  **
    *   *    */ 
#include<stdio.h>
int main(){
	int i,n,j;
	printf("Enter Number Of Rows And Columns (Odd Only):");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(j==1 || j==n || i==j){
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

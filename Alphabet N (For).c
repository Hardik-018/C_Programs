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
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1 || j==n || i==j){
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

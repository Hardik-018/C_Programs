/*  *
    *
    * 
    * 
    *****    */
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter Number Of Rows And Columns(Odd Only):");
	scanf("%d",&n);
	for(i=1;i<=n;){
		for(j=1;j<=n;j++){
			if(i==n || j==1){
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

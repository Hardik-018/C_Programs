/*  *   *
    *   *
	* * *
	** **
	*   *    */ 
#include<stdio.h>
int main(){
	int i,j,n,mid;
	printf("Enter Number Of Rows And Columns (Odd Only):");
	scanf("%d",&n);
	mid=(n+1)/2;
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    		if(j==1 || j==n || i==mid && j==mid || i==j && i>mid 
			    ||i+j==mid*2 && i>mid ){
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

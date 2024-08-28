/*  *   *
    ** **
	* * *
	*   *
	*   *    */ 
#include<stdio.h>
int main(){
	int i,j,n,mid;
	printf("Enter Number Of Rows And Columns (Odd Only):");
	scanf("%d",&n);
	mid=(n+1)/2;
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(j==1 || j==n || i==mid && j==mid || i==j && i<mid 
			    ||i+j==mid*2 && i<mid ){
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

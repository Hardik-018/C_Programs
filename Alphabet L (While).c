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
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i==n || j==1){
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

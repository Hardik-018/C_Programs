/*  *****
    *   *
    *****
//      *
//      *    */
#include<stdio.h>
int main(){
	int i,j,n,mid;
	printf("Enter Number Of Rows And Columns:");
	scanf("%d",&n);
	mid=(n+1)/2;
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i==1 || i==mid || j==1 && i<mid || j==n){
				printf("*");
			}
			else{
				printf(" ");
			}
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}    

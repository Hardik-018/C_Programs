/*  * ***
    * *
    *****
/     * *
    *** *  */
#include<stdio.h>
int main(){
	int n,j,i,mid;
	printf("Enter Number Of Rows And Columns:");
	scanf("%d",&n);
	mid=(n+1)/2;
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(j==mid || i==mid || i==1 && j>mid || j==1 && i<mid ||
			    j==n && i>mid || i==n && j<mid){
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

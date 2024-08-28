/*  * ***
    * *
    *****
      * *
    *** *  */
#include<stdio.h>
int main(){
	int n,j,i,mid;
	printf("Enter Number Of Rows And Columns:");
	scanf("%d",&n);
	mid=(n+1)/2;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==mid || i==mid || i==1 && j>mid || j==1 && i<mid ||
			    j==n && i>mid || i==n && j<mid){
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

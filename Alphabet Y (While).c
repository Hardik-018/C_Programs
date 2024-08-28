/*    *   * 
       * *
        *
        *
        *       */
#include<stdio.h>
int main(){
	int i,n,j,mid;
	printf("Enter Number Of Rows & Columns:");
	scanf("%d",&n);
	i=1;
	mid=(n+1)/2;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i+j==n+1 && j>=mid || i==j && j<mid || j==mid && i>mid){
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

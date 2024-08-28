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
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i+j==n+1 && j>=mid || i==j && j<mid || j==mid && i>mid){
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

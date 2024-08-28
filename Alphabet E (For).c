/* *****
   *
   *****
   *
   *****  */
#include<stdio.h>
int main(){
	int i,n,j,mid;
	printf("Enter Number Of Rows And Columns:");
	scanf("%d",&n);
	mid=(n+1)/2;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 || i==mid || i==n || j==1){
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

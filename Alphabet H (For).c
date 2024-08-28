/*  *   *
    *   *
    *****
    *   *
    *   *   */
#include<stdio.h>
int main(){
	int i,n,j,mid;
	printf("Enter Number Of Rows & Columns:");
	scanf("%d",&n);
	mid=(n+1)/2;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1 || i==mid || j==n){
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

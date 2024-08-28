/*  *****
    *   *
    *   *
    *   *
    *****  */
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter Number Of Rows And Columns:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 || j==1 || j==n || i==n){
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

/*  *****
    *
    *
    *
    *****    */
#include<stdio.h>
int main(){
	int i,n,j;
	printf("Enter Number Of Rows And Columns:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 || j==1 || i==n){
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

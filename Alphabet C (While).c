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
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i==1 || j==1 || i==n){
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

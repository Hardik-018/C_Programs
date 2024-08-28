/*  *****
    *   *
    *   *
    *   *
    *****   */
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter Number Of Rows And Columns:");
	scanf("%d", &n);
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i==1 || i==n || j==n || j==1){
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
}   

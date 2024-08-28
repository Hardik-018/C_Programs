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
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(j==1 || i==mid || j==n){
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

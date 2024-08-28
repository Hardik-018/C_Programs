/*    ***** 
         *
        *
       *
      *****    */
#include<stdio.h>
int main(){
	int i,n,j,mid;
	printf("Enter Number Of Rows & Columns:");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i==1 || i+j==n+1 || i==n){
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

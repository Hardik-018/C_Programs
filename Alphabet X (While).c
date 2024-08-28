/*    *   * 
       * *
        *
       * *
      *   *    */
#include<stdio.h>
int main(){
	int i,n,j;
	printf("Enter Number Of Rows & Columns:");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i+j==n+1 || i==j){
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

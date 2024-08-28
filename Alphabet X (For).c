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
    for(i=1;i<=n;i++){
    	for(j=1;j<=n:j++){
    		if(i+j==n+1 || i==j){
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

/* *       * 
    *     * 
     *   *
      * *
	   *  */
#include<stdio.h>
int main(){
	int i,j,n,k,mid;
	printf("Enter How Many Rows:");
	scanf("%d", &n);
	mid=(n+1)/2;
	for(i=n;i>=1;i--){
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(j==1 || j==2*i-1){
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

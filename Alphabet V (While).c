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
	i=n;
	while(i>=1){
		k=1;
		while(k<=n-i){
			printf(" ");
			k++;
		}
		j=1;
		while(j<=2*i-1){
			if(j==1 || j==2*i-1){
				printf("*");
			}
			else{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}

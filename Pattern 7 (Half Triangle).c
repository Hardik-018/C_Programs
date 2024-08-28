/*1
  23
  456
  7890 */
#include<stdio.h>
int main(){
	int i,j,n,k=1;
	printf("Enter Number Of Rows And Columns:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		printf("%d", k%10);
		k++;
		}
		printf("\n");
	}
	return 0;
}  

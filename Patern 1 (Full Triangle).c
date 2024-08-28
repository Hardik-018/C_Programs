/*    1
     123
    12345
   1234567
  123456789 */
#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("Enter How Many Rows:");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("%d",j%10);
		}
		printf("\n");
	}
	return 0;
}

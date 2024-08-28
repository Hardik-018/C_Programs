/* a
   ba
   cba
   dcba
   edcba   */
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter How Many Rows:");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=i;j>=1;j--){
			printf("%c", j+96);
		}
		printf("\n");
	}
	return 0;
}

/* 54321
   4321
   321
   21
   1       */
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter How Many Rows:");
	scanf("%d", &n);
	for(i=n;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}

/* 1
   01
   101
   0101
   10101  */
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter How Many Rows:");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=i;j>=1;j--){
			printf("%d", j%2);
		}
		printf("\n");
	}
	return 0;
}

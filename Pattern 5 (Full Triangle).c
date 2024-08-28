/*  1
   121
  12321
 1234321
123454321   */
#include<stdio.h>
int main(){
	int i,j,n,k,l;
	printf("Enter How Many Rows:");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d",j%10);
		}
		for(l=i-1;l>=1;l--){
			printf("%d",l%10);
		}
		printf("\n");
	}
	return 0;
}  

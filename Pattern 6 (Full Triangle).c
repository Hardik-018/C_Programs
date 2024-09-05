/*  4
   434
  43234
 4321234
  43234
   434
    4       */
#include<stdio.h>
int main(){
	int i,j,n,k,l;
	printf("Enter How Many Rows:");
	scanf("%d", &n);
	for(i=n;i>=1;i--){
		for(k=1;k<=i-1;k++){
			printf(" ");
		}
		for(j=n;j>=i;j--){
			printf("%d",j);
		}
		for(l=i+1;l<=n;l++){
			printf("%d",l);
		}
		printf("\n");
	}
	for(i=2;i<=n;i++){
		for(k=1;k<=i-1;k++){
			printf(" ");
		}
		for(j=n;j>=i;j--){
			printf("%d",j);
		}
		for(l=i+1;l<=n;l++){
			printf("%d",l);
		}
		printf("\n");
	}
	return 0;
}  

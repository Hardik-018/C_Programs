/* 4444444
   4333334
   4322234
   4321234
   4322234
   4333334
   4444444   */
#include<stdio.h>
int main(){
	int i,j,k,l,n;
	printf("Enter how Many Rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=n;j>=i;j--){
			printf("%d",j);
		}
		for(k=1;k<=2*i-3;k++){
			printf("%d",i);
		}
		for(l=i;l<=n;l++){
			if(l==1){
				continue;
			}
			printf("%d",l);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("%d",j);
		}
		for(k=1;k<=2*i-3;k++){
			printf("%d",i);
		}
		for(l=i;l<=n;l++){
			if(l==1){
				continue;
			}
			printf("%d",l);
		}
		printf("\n");
	}
	return 0;
}   

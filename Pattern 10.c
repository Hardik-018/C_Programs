/* ABCDEDCBA
   ABCD DCBA
   ABC   CBA
   AB     BA
   A       A  
   AB     BA
   ABC   CBA
   ABCD DCBA
   ABCDEDCBA*/
#include<stdio.h>
int main(){
	int i,j,n,k,l;
	printf("Enter How Many Rows:");
	scanf("%d", &n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%c", j+64);
		}
		for(k=1;k<=2*(n-i)-1;k++){
			printf(" ");
		}
		for(l=i;l>=1;l--){
			if(l==n){
				continue;  // used to skip extra Nth term in 1st row. 
			}
			printf("%c",l+64);
		}
		printf("\n");
	}
	for(i=2;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c", j+64);
		}
		for(k=1;k<=2*(n-i)-1;k++){
			printf(" ");
		}
		for(l=i;l>=1;l--){
			if(l==n){
				continue;  // used to skip extra Nth term in 1st row. 
			}
			printf("%c",l+64);
		}
		printf("\n");
	}
	return 0;
}     

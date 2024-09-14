/*  *********
    *       *
    *       *
    *       *
    *********   */
#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("Enter Number Of Rows:");
	scanf("%d",&r);
	printf("Enter Number Of Columns:");
	scanf("%d",&c);
	for(i=1;i<=c;i++){
		for(j=1;j<=r;j++){
			if(i==1 || j==1 || j==r ||i==c){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}    

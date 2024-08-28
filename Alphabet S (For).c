/*  *****
    *
    *****
/*      *
    *****    */ 
#include<stdio.h>
int main(){
	int i,n,j,mid;
	printf("Enter Numbrer Of Rows And Columns (Odd Only):");
	scanf("%d",&n);
	mid=(n+1)/2;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 || i==n || j==1 && i<mid
			 || j==n && i>mid || i==mid){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
/*	i=1;
	while(i<=n){
		j=1;
		while(j<=n){
			if(i==1 || i==n || j==1 && i<mid || j==n && i>mid || i==mid){
				printf("*");
			}
			else{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}*/
	return 0;
}

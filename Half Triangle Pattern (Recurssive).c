#include<stdio.h>
void col(int j, int i){
	if(j>i){
		return;
	printf("%d", j);
	col(j+1, i);	
	}
	
}
void row(int i, int n){
	if(i>n){
		return;
	col(1, i);	
	printf("\n");
	row(i+1, n);	
	}
	
}
int main(){
	int i,n;
	printf("Enter How Many Rows:");
	scanf("%d", &n);
	row(i,n);
	return 0;
}

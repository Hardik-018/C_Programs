#include<stdio.h>
int main(){
	int n;
	printf("Enter A Number:");
	scanf("%d", &n);
	if(n>=50 && n<=100 || n%7==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}

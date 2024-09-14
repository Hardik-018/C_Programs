#include<stdio.h>
int power(int n, int p){
	if(p==0){
		return 1;
	}
	return n*power(n,p-1);
}
int main(){
	int n,p;
	printf("Enter A Number:");
	scanf("%d", &n);
	printf("Enter Power:");
	scanf("%d", &p);
	printf("Answer Is %d.", power(n,p));
	return 0;
}

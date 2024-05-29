#include<stdio.h>
#include<conio.h>
int main(){
	int A,B,MAX;
	printf("Enter Value For 'A'And 'B':");
	scanf("%d %d", &A,&B);
	if(A>B)
	MAX=A;
	else
	MAX=B;
	printf("Max of %d and %d is %d", A,B,MAX);
	return 0;
}

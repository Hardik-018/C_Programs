#include<stdio.h>
#include<conio.h>
int main(){
	int A,B,MAX;
	printf("Enter Values For 'A'And 'B':");
	scanf("%d %d", &A,&B);
	if(A>B)
	MAX=A;
	if(B>A)
	MAX=B;
	printf("Max of %d and %d is %d", A,B,MAX);
	return 0;
}

#include<stdio.h>
int main(){
	float x, i;
	printf("Enter A Number:");
	scanf("%f", &x);
	for(i=0.001; x>=i*i; i+=0.001);
	printf("Square Root Is %.2f", i);
	return 0;
}

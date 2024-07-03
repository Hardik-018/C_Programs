#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float n;
	int roundoff;
	printf("Enter Decimal Value:");
	scanf("%f", &n);
	roundoff=round(n);
	printf("%d", roundoff);
	return 0;
}

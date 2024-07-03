#include<stdio.h>
#include<math.h>
int main(){
	float x;
	printf("Enter Number:");
	scanf("%f", &x);
	x=round(x);
	printf("%.1f",x);
	return 0;
}

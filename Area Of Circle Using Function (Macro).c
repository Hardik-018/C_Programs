#include<stdio.h>
#define pi 3.14
#define calc_area(r) ((pi)*(r)*(r))
int main(){
	int r;
	float area;
	printf("Enter Radius:");
	scanf("%d", &r);
	printf("area is %f", calc_area(r));
	return 0;
}

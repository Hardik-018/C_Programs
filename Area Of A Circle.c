#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main(){
	int r;
	float area;
	printf("Enter Radius:");
	scanf("%d", &r);
	area=pi*r*r;
	printf("area is %f",area);
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
int main(){
	float p,r,t,ci,si;
	printf("Enter Principal Amount:");
	scanf("%f", &p);
	printf("Enter Rate Of Interest:");
	scanf("%f", &r);
	printf("Enter Time In Years:");
	scanf("%f", &t);
	si=p*r*t/100;
	ci=p*pow(1+r/10,t)-p;
	printf("Simple Interest Is:%.2f", si);
	printf("\nCompound Interest Is:%.2f", ci);
	return 0;
}

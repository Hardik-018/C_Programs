#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
int main(){
	float a,b,c,r1,r2,d;
	printf("Enter Coefficients a,b,c:");
	scanf("%f %f %f", &a,&b,&c);
	d=b*b-(4*a*c);
	if(d>=0){
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("Roots Are:%f,%f" ,r1,r2);
	}
	else{
		printf("Roots Are Imaginory");
	}
	return 0;
}

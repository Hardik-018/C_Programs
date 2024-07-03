#include<stdio.h>
#include<math.h>
int main(){
	float x;
	char T;
	printf("Enter Angles In Degrees:");
	scanf("%f", &x);
	printf("Enter s For Sin t For Tan c For Cos:");
	fflush(stdin);
	scanf("%c", &T);
	x=x*3.14159265359/180;
	switch(T){
		case 's':
		case 'S':
			printf("%f",sin(x));
			break;
		case 'c':
		case 'C':
			printf("%f",cos(x));
			break;
		case 't':
		case 'T':
			printf("%f",tan(x));
			break;
		default:
			printf("Invalid Input.");
	}
	return 0;
}

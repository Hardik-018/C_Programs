#include<stdio.h>
#include<conio.h>
int main(){
	float ferhenite, celcius;
	printf("enter ferhenite : ");
	scanf("%f",&ferhenite);
	celcius=(ferhenite-32)*5/9.0;
	printf("celcius = %f",celcius);
	return 0;
}

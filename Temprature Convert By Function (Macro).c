#include<stdio.h>
#include<conio.h>
float temp(float f){
	float c;
	c=(f-32)*5.0/9.0;
	return c;
}
int main(){
	float f, c;
	printf("Enter Temprature In Ferhenite : ");
	scanf("%f", &f);
	c=temp(f);
	printf("celcius Is %.2f", c);
	return 0;
}

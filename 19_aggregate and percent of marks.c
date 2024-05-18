#include<stdio.h>
#include<conio.h>
int main(){
	float s1,s2,s3,s4,s5,Percentage;
	int aggregate;
	printf("Enter Marks For Sub1:");
	scanf("%f", &s1);
	printf("Enter Marks For Sub2:");
	scanf("%f", &s2);
	printf("Enter Marks For Sub3:");
	scanf("%f", &s3);
	printf("Enter Marks For Sub4:");
	scanf("%f", &s4);
	printf("Enter Marks For Sub5:");
	scanf("%f", &s5);
	aggregate=(s1+s2+s3+s4+s5);
	Percentage=(s1+s2+s3+s4+s5)/500*100;
	printf("Aggregate = %d\nPercentage = %.2f", aggregate,Percentage);
	return 0;
}

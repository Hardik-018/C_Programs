#include<stdio.h>
#include<conio.h>
int main(){
	float p;
	char grade;
	printf("Enter Percentage:");
	scanf("%f", &p);
	if(p>=90)
		printf("Grade Is 'A'");
	else if (p>=70)
		printf("Grade Is 'B'");
	else if (p>=50)
		printf("Grade Is 'C'");
	else if(p<50)
		printf("Grade Is 'F'");
return 0;
}

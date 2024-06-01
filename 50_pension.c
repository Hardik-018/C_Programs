#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	int age,pension;
	char gender;
	printf("Enter Your Age:");
	scanf("%d", &age);
	printf("Enter Gender:");
	/*fflush(stdin);
	This Function can Also be Used to get Character after Integer*/
	scanf("\n%c", &gender);            // (\n can also be used to correct the error.)
	if(gender=='M' || gender=='m'){
		if(age>=90){
			pension=40000;
		}
		else if(age>=60){
			pension=60000;	
		}
		else{
			pension=0;
		}
	}
	else if(gender=='F' || gender=='f'){
		if(age>=90){
			pension=35000;
		}
		else if(age>=60){
			pension=65000;	
		}
		else{
			pension=0;
		}
	}
	else{
		printf("Invalid Input");
	}
	printf("Your Pension Is:%d", pension);
	return 0;
}

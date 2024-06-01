#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	int n;
	printf("Enter Day Number:");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thrusday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Invalid Input");						
	}
}

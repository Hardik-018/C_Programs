#include<stdio.h>
int main(){
	int p;
	char grade;
	printf("Enter Percentage:");
	scanf("%d", &p);
	switch(p){
		case 90 ... 100:
			printf("Grade is 'A'");
			break;
		case 80 ... 89:
			printf("Grade is 'B'");
			break;
		case 50 ... 79:
			printf("Grade is 'C'");
			break;
		case 0 ... 49:
			printf("Grade is 'F'");
			break;			
	}
	return 0;
}

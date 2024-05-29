#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter Number Of Month:");
	scanf("%d", &n);
	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
		printf("Days In This Month Are 31 days");
	else if(n==2)
	    printf("Days In This Month Are 28 or 29 days");
    else if(n=4||n==6||n==9||n==11)
		printf("Days In This Month Are 30 days");
	else
		printf("Invalid Input");
	return 0;
}

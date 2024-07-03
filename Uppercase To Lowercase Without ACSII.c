//Uppercase Character Into Lower Case Character  without Using ASCII.
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter Uppercase Character:");
	ch=getchar();
	if(ch>='A' && ch<='Z')
		ch=ch+('a'-'A');
	else
		printf("Invalid Input:");
	putchar(ch);	
	return 0;
}

//Lowercase Character Into Upper Case Character  without Using ASCII
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter Lower Case Character:");
	ch=getchar();
	if(ch>='a' && ch<='z')
		ch=ch-('a'-'A');
	else
		printf("Invalid Input:");
	putchar(ch);	
	return 0;
}

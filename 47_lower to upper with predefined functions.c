//Lowercase To Uppercase With Predefine Functions.
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter Lower Case Character:");
	ch=getchar();
	ch=toupper(ch);
	putchar(ch);
	return 0;
}

//Uppercase To Lowercase With Predefine Functions.
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter Uppercase Character:");
	ch=getchar();
	ch=tolower(ch);
	putchar(ch);
	return 0;
}

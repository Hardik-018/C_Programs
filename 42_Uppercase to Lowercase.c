//Uppercase To Lowercase with ASCII.
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter Uppercase Character:");
	ch=getchar();
	if(ch>=65 && ch<=90)
		ch=ch+32;
	else
		printf("Invalid Character:");
	putchar(ch);	
	return 0;
}

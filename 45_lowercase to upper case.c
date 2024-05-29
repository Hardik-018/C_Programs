//Lowercase Character Into Upper Case Character Using ASCII
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter Lower Case Character:");
	//scanf("%c", &ch);
	ch=getchar();
	if(ch>=97 && ch<=122)
		ch=ch-32;
	else
		printf("Invalid Input:");
	putchar(ch);	
	return 0;
}

/*whether a given character is a lowercase
alphabet or uppercase alphabet or a digit or a symbol  Without using ascii.*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter Any Character:");
	ch=getchar();
	if(ch>='a' && ch<='z')
		printf("It Is A Lowercase Alphabet.");
	else if(ch>='A' && ch<='Z')
		printf("It Is A Uppercase Alphabet.");
	else if(ch>='0' && ch<='9')
		printf("It Is A Digit.");
	else if(ch==' ')
		printf("It Is A Space.");
	else
		printf("It Is A Symbol");
return 0;
}

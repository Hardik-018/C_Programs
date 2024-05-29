/*whether a given character is a lowercase
alphabet or uppercase alphabet or a digit or a symbol using ascii.*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter Any Character:");
	ch=getchar();
	if(ch>=97 && ch<=122)
		printf("It Is A Lowercase Alphabet.");
	else if(ch>=65 && ch<=90)
		printf("It Is A Uppercase Alphabet.");
	else if(ch>=48 && ch<=57)
		printf("It Is A Digit.");
	else if(ch==32)
		printf("It Is A Space.");
	else
		printf("It Is A Symbol");
return 0;
}

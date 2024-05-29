/*whether a given character is a lowercase
alphabet or uppercase alphabet or a digit or a symbol using Predefined Functions.*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter Any Character:");
	ch=getchar();
	if(islower(ch))
		printf("It Is A Lowercase Alphabet.");
	else if(isupper(ch))
		printf("It Is A Uppercase Alphabet.");
	else if(isdigit(ch))
		printf("It Is A Digit.");
	else if(isspace(ch))
		printf("It Is A Space.");
	else
		printf("It Is A Symbol");
return 0;
}

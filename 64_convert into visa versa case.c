#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter character:");
	ch=getchar();
	if(ch>='a' && ch<='z'){
		ch=toupper(ch);
		putchar(ch);
	}
	else if(ch>='A' && ch<='Z'){
		ch=tolower(ch);
		putchar(ch);
	}
	else{
		printf("Invalid Input");
	}
	return 0;	
}

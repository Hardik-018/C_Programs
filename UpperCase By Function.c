#include<stdio.h>
char uppercase(char ch){
	if(ch>97 && ch<122){
		ch=ch-32;
	}
	return (ch);
}
int main(){
	char x,ans;
	printf("Enter A Lower Character:");
	scanf("%c",&x);
	ans=uppercase(x);
	printf("Uppercase Is %c.",ans);
	return 0;
}

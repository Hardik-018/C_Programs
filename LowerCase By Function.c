#include<stdio.h>
char lowercase(char ch){
	if(ch>65 && ch<90){
		ch=ch+32;
	}
	return (ch);
}
int main(){
	char x,ans;
	printf("Enter A UpperCase Character:");
	scanf("%c",&x);
	ans=lowercase(x);
	printf("Lowercase Is %c.",ans);
	return 0;
}

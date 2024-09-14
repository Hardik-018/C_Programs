#include<stdio.h>
#define true 1
#define false 0
char isallnum(char ch){  
	if(ch>=97 && ch<=122){
		printf("Enterd Character Is A LowerCase Character.");
	}
	else if(ch>=65 && ch<=90){
		printf("Enterd Character Is A UpperCase Character.");
	}
	else if(ch>=48 && ch<=57){
		printf("Enterd Character Is A Digit.");
	}
	else if (ch==32){
		printf("Enterd Character Is A Space.");
	}
	else{
		printf("Enterd Character Is A Symbol.");
	}
}
int main(){
	char ch, ans;
	printf("Enter A Character:");
	scanf("%ch", &ch);
	ans=isallnum(ch);
	return 0;
}

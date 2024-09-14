#include<stdio.h>
#define true 1
#define false 0
char isdigi(char ch){  
	if(ch>=48 && ch<=57){
		printf("\nEnterd Character Is A Digit.");
	}
	else{
		printf("\nEnterd Character Is Not A Digit.");
	}
}
int main(){
	char ch, ans;
	printf("Enter A Character:");
	scanf("%ch", &ch);
	ans=isdigi(ch);
	return 0;
}

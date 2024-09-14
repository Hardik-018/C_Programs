#include<stdio.h>
#define true 1
#define false 0
char isspace(char ch){  
	if(ch==32){
		printf("\nEnterd Character Is A Space.");
	}
	else{
		printf("\nEnterd Character Is Not A Space.");
	}
}
int main(){
	char ch, ans;
	printf("Enter A Character:");
	scanf("%ch", &ch);
	ans=isspace(ch);
	return 0;
}

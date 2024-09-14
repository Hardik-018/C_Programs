#include<stdio.h>
#define True 1
#define False 0
char islowercase(char ch){
	if(ch>97 && ch<122)
	    return (1);
	else{
		return (0);
	}
}
int main(){
	char x,ans;
	printf("Enter A Character:");
	scanf("%c",&x);
	ans=islowercase(x);
	if(ans==True){
		printf("In LowerCase.");
	}
	else if(ans==False){
		printf("Not In LowerCase.");
	}
	return 0;
}

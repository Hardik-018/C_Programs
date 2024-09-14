#include<stdio.h>
#define True 1
#define False 0
char isuppercase(char ch){
	if(ch>65 && ch<90)
	    return (1);
	else{
		return (0);
	}
}
int main(){
	char x,ans;
	printf("Enter A Character:");
	scanf("%c",&x);
	ans=isuppercase(x);
	if(ans==True){
		printf("In UpperCase.");
	}
	else if(ans==False){
		printf("Not In UpperCase.");
	}
	return 0;
}

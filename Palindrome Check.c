#include<stdio.h>
#include<math.h>
int main(){
	int n,f,l;
	printf("Enter A Three Digit Number:");
	scanf("%d", &n);
	f=n/100; l=n%10;
	if(f==l){
		printf("It's A Palindrome.");
	}
	else{
		printf("It's Not A Palindrome.");
	}
	return 0;
}

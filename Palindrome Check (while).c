#include<stdio.h>
int main(){
	int n,rev,oldn;
	printf("Enter A Number:");
	scanf("%d",&n);
	oldn=n;
	rev=0;
	while(n!=0){
		rev=rev*10+n%10;
		n=n/10;
	}
	if(rev==oldn){
		printf("\nIt's A Palindrome.");
	}
	else{
		printf("\nIt's Not A Palindrome.");
	}	
	return 0;
}

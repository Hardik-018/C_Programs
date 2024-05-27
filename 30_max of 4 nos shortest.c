#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,d,max;
	printf("Enter 4 integers:");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	printf("Max number is %d." ,max);
	return 0;
}


#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,d,max;
	printf("Enter Value For A,B,C,D:");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	if(a>b){
		if(a>c){
			if(a>d){
				max=a;
			}
			else{
				max=d;
			}
		}
		else{
			if(c>d){
				max=c;
			}
			else{
				max=d;
			}
		}	
	}
	else{
		if(b>c){
			if(b>d){
				max=b;
			}
			else{
				max=d;
			}
		}
		else{
			if(c>d){
				max=c;
			}
			else{
				max=d;
			}
		}
	}
	printf("Max Number Is:%d", max);
	return 0;
}

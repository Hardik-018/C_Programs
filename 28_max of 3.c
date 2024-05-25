#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,max;
	printf("Enter 'A','B'And'C'");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b){// a is greater
		if(a>c){
			max=a;
		}
		else{
			max=c;
	}
	}
	else{//b is greater
		if(b>c){
			max=b;
		}
		else{
			max=c;
		}
	}
	printf("Max is %d", max);
	return 0;

}

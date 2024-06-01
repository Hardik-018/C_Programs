#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,f,s,l;       //a,b,c are 3 nos.  // f,s,l stands for frist second and last. 
	printf("Enter 3 number in format N1,N2,N3:");
	scanf("%d,%d,%d", &a,&b,&c);
	if(a>b){
		if(a>c){
			if(b>c){
				l=a;s=b;f=c;
			}
			else{
				l=a;s=c;f=b;
			}
		}
		else{
			l=c;s=a;f=b;
		}
	}
	else{
		if(b>c){
			if(a>c){
				l=b;s=a;f=c;
			}
			else{
				l=b;s=c;f=a;
			}
		}
		else{
			l=c;s=b;f=a;
		}
	}
	printf("Number In Acending Order Are: %d,%d,%d", l,s,f);
	return 0;
}

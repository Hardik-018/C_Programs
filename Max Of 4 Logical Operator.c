#include<stdio.h>
int main(){
	int a,b,c,d,max;
	printf("Enter Four Number:");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	if(a>b && a>c && a>d)
		max=a;
	else if(b>c && b>d)
        max=b;
    else if(c>d)
	    max=c;
	else
	    max=d;
	printf("Max Number Is %d",max);    
}  

#include<stdio.h>
#include<conio.h>
int main(){
	int l,b,p;
	printf("Enter dimenssions:");
	scanf("%d %d", &l,&b);
	//p= perimeter
	p=2*(l+b);
	printf("Perimeter Of Rectangle:%d", p);	
	return 0;
}

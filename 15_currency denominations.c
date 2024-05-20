#include<stdio.h>
#include<conio.h>
int main(){
	int rs,a,b,c,d,e,f,g,h,i;
	printf("Enter Rupees:");
	scanf("%d", &rs);
	a=rs/500; rs=rs%500;
	b=rs/200; rs=rs%200;
	c=rs/100; rs=rs%100;
	d=rs/50; rs=rs%50;
	e=rs/20; rs=rs%20;
	f=rs/10; rs=rs%10;
	g=rs/5; rs=rs%5;
	h=rs/2; rs=rs%2;
	i=rs/1;
		
	printf("500x%d\n200x%d\n100x%d\n50x%d\n20x%d\n10x%d\n5x%d\n2x%d\n1x%d", a,b,c,d,e,f,g,h,i);
	return 0;
}

#include<stdio.h>
void swap(int x,int y){
	int t=0;
	t=x;
	x=y;
	y=t;
	printf("Numbers After Swapping Are:%d,%d.", x,y);
}
int main(){
	int a,b;
	printf("Enter Two Numbers:");
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
}

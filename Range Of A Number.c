#include<stdio.h>
#include<conio.h>
int main(){
	int a,ur,lr;
	printf("Enter Number");
	scanf("%d", &a);
	lr=a/10*10; ur=lr+9;
	printf("Range:%d-%d" ,lr,ur);
	return 0;
}

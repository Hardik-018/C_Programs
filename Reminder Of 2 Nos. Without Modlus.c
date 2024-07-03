#include<stdio.h>
#include<conio.h>
int main(){
	int n,d,q,r;
	printf("Enter 'N':");
	scanf("%d",&n);
	printf("Enter 'D':");
	scanf("%d", &d);
	q=n/d; r=n-(q*d);
	printf(" Qutient = %d \n Reminder = %d", q,r);
	return 0;
}

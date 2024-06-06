#include<stdio.h>
int main(){
	int n;
	float bill;
	printf("Enter Units Consumed:");
	scanf("%d", &n);
	if(n<=200){
		bill=n*0.8;
	}
	else if(n<=300){
		bill=(n-200)*0.9+200*0.8;
	}
	else{
		bill=(n-300)*1.00+100*0.9+200*0.8;
	}
	bill=bill+100;
	if(bill>400){
		bill=bill+bill*0.15;
	}
	printf("Your Bill Is:%.2f",bill);
	return 0;
}

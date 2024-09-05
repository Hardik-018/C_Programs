#include<stdio.h>
#include<math.h>
int main(){
	int n,countdigit,oldn,sum,digit;
	printf("Enter Number:");
	scanf("%d",&n);
	oldn=n;
	countdigit=0;
	while(n!=0){
		n=n/10;
		countdigit++;
	}
	n=oldn;
	sum=0;
	while(n!=0){
		digit=n%10;
		n=n/10;
		sum=sum+ceil(pow(digit,countdigit));
	}
	if(sum==oldn){
		printf("Number Is Arm-Strong.");
	}
	else{
		printf("Number Is Not Arm-Strong.");
	}
	return 0;
}

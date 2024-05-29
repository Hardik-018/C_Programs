#include<stdio.h>
#include<conio.h>
int main(){
	int cp,sp;
	printf("Enter Cost Price Of Goods:");
	scanf("%d", &cp);
	printf("Enter Selling Price Of Goods:");
	scanf("%d", &sp);
	if(sp>cp)
		printf("Profit Is %d.",sp-cp);
	else if(cp>sp)
		printf("Loss Is %d.", cp-sp);
	else
		printf("No Profit No Loss.");
	return 0;
}

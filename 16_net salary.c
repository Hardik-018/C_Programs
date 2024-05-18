#include<stdio.h>
#include<conio.h>
int main(){
	int BS,NS,HRA,DA,TA,PF,TAX;
	printf("Enter Your Basic Salary: ");
	scanf("%d", &BS);
	HRA=20/100*BS; DA=40/100*BS; TA=5/10*BS; PF=12.5/10*BS;TAX=100;
	//NS= NET SALARY
	NS=(BS+DA+HRA+TA+PF)-TAX;
	printf("Your Net Salary Is:%d", NS);	
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main(){
	float BS,NS,HRA,DA,TA,TAX,GS;
	float PF;
	printf("Enter Your Basic Salary: ");
	scanf("%f", &BS);
	HRA=0.2*BS; DA=0.4*BS; TA=0.05*BS; PF=0.125*BS;TAX=100;
	GS=BS+DA+HRA+TA;
	NS=GS-TAX-PF;
	printf("Your Net Salary Is:%.2f", NS);	
	return 0;
}

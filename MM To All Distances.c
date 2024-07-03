#include<stdio.h>
#include<conio.h>
int main(){
	float km,hm,dcm,m,dm,cm,mm;
	printf("Enter MM:");
	scanf("%f", &mm);
	mm=mm; cm=mm/10; dm=cm/10; m=dm/10; dcm=m/10; hm=dcm/10; km=hm/10;
	printf("kilometer=%f", km);
	printf("\nHectometer=%f", hm);
	printf("\nDecameter=%f", dcm);
	printf("\nMeter=%f", m);
	printf("\nDecimeter=%f", dm);
	printf("\nCentimeter=%f", cm);
	printf("\nMillimeter=%f", mm);
	return 0;
}

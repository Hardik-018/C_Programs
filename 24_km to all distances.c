#include<stdio.h>
#include<conio.h>
int main(){
	float km,hm,dcm,m,dm,cm,mm;
	printf("Enter KM:");
	scanf("%f", &km);
	km=km; hm=km*10; dcm=hm*10; m=dcm*10; dm=m*10; cm=dm*10; mm=cm*10;
	printf("kilometer=%.2f", km);
	printf("\nHectometer=%.2f", hm);
	printf("\nDecameter=%.2f", dcm);
	printf("\nMeter=%.2f", m);
	printf("\nDecimeter=%.2f", dm);
	printf("\nCentimeter=%.2f", cm);
	printf("\nMillimeter=%.2f", mm);
	return 0;
}

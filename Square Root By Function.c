#include<stdio.h>
float squarert(float x){
	float i;
	for(i=0.001; x>=i*i; i+=0.001);
	return i;
}
int main(){
	float x, ans;
	printf("Enter A Number:");
	scanf("%f", &x);
	ans=squarert(x);
	printf("Square Root Is %.2f.", ans);
	return 0;
}

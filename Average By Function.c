#include<stdio.h>
int avg(int n1,int n2){
	float avg;
	avg=(n1+n2)/2.0;
	return avg;
}
int main(){
	int a,b;
	float ans;
	printf("Enter Two Number:");
	scanf("%d%d",&a,&b);
	ans=avg(a,b);
	printf("Average Is %.2f.",ans);
	return 0;
}
